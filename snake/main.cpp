#include<allegro.h>
#define LARGO 1000
#define ANCHO 720
#define LIMITE 200
#define ARRIBA 0
#define ABAJO 1
#define IZQUIERDA 2
#define DERECHA 3

BITMAP *buffer;
BITMAP *cabezas;
BITMAP *cabeza;
BITMAP *cuerpo;
BITMAP *vida;
BITMAP *comida;

int LIMITE_X= LARGO / 40;
int LIMITE_Y= ANCHO / 40;
int TAM= 3;
int DIR = DERECHA;
struct Nodo{
    int x,y;
};
Nodo cuer[LIMITE];

void programa(){
    allegro_init();//usar las librerias
    install_keyboard();//permitir usar el tecldo
    set_color_depth(32);//colores en 32 bits
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,LARGO,ANCHO,0,0);//posicion de la ventana
    buffer=create_bitmap(LARGO,ANCHO);
    cabezas=create_bitmap(160,40);
    cabeza=create_bitmap(40,40);
    cuerpo=create_bitmap(40,40);
    vida=create_bitmap(40,40);

    cabezas=load_bitmap("sprites/cabeza.bmp",NULL);
    cuerpo=load_bitmap("sprites/cuerpo.bmp",NULL);
    vida=load_bitmap("sprites/vida.bmp",NULL);
    comida=load_bitmap("sprites/comida.bmp",NULL);

}
void bordes(){
//para el bord e es (BITMAP *,x0,y0,x1,y1);
//el superior
    rectfill(buffer,0,0,LARGO,60,0xFF0000);
    rectfill(buffer,0,ANCHO-60,LARGO,ANCHO,0xFF0000);
    rectfill(buffer,0,ANCHO,20,0,0xFF0000);
    rectfill(buffer,LARGO-20,20,LARGO,ANCHO,0xFF0000);
}
void actualizar(){
    blit(buffer,screen,0,0,0,0,LARGO,ANCHO);//BLIT es para colocar la consola sobra la pantalla
}
void crear_snake(){
    //POSICION
    cuer[0].x=10;
    cuer[0].y=9;
    //aumentar el cuerpo
    for(int i=1;i<=TAM;i++){
        cuer[i].x =cuer[0].x -i;
        cuer[i].y =cuer[0].y;
    }
}
void dibujar_s(){
    switch(DIR){
    case ARRIBA:
        blit(cabezas,cabeza,0,0,0,0,40,40);
        break;
    case ABAJO:
        blit(cabezas,cabeza,40,0,0,0,40,40);
        break;
    case IZQUIERDA:
        blit(cabezas,cabeza,120,0,0,0,40,40);
        break;
    case DERECHA:
        blit(cabezas,cabeza,80,0,0,0,40,40);
        break;
    }
    draw_sprite(buffer,cabeza,cuer[0].x*40,cuer[0].y*40);

     for(int i=1;i <= TAM; i++){
        draw_sprite(buffer,cuerpo,cuer[i].x*40,cuer[i].y*40);
     }
}
void actualizar_di(){
    if(key[KEY_UP]){
        DIR= ARRIBA;
    }
    if(key[KEY_DOWN]){
        DIR=ABAJO;
    }
    if(key[KEY_LEFT]){
        DIR=IZQUIERDA;
    }
    if(key[KEY_RIGHT]){
        DIR=DERECHA;
    }
}
void mover_s(){
    //actualizar cabeza
    for(int i=TAM;i>0;i--){
        cuer[i] = cuer[i-1];
    }
    //solo cabeza
    switch(DIR){
    case ARRIBA:
        cuer[0].y--;
        break;
    case ABAJO:
        cuer[0].y++;
        break;
    case DERECHA:
        cuer[0].x++;
        break;
    case IZQUIERDA:
        cuer[0].x--;
        break;
    }
}

int main(){
    programa();
    bordes();
    crear_snake();
    dibujar_s();
    actualizar();
    while(!key[KEY_ESC]){
        clear(buffer);
        mover_s();
        actualizar_di();
        bordes();
        dibujar_s();
        actualizar();
        rest(100);
    }
return 0;
}
END_OF_MAIN();
