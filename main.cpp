#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>

using namespace std;
#include "funciones.h"
#include "juego1.h"
#include "Combinaciones.h"
#include "rlutil.h"

///Autores: Enzo Romano, Tomás Buteler, Franco Aikén Orcellet

int main(){
int puntajeMax=-1,tiradasMax=0,puntajeTotal=0,puntajeTotal2=0,conTiradasTotales=1,conTiradasTotales2=1;

bool finalizar,puntajeMaxFlag;
char nombre[25],nombre2[25],nombreMax[25];

int opcion;
while(true){
    opcion=MenuPrincipalGenerala();
switch(opcion){
case 19:  juego1(nombre,nombreMax,puntajeTotal,puntajeMax,conTiradasTotales,tiradasMax,finalizar,puntajeMaxFlag);
break;
case 20: juego2(nombre,nombreMax,puntajeTotal,puntajeTotal2, puntajeMax, conTiradasTotales, conTiradasTotales2, tiradasMax, finalizar, puntajeMaxFlag);
break;
case 21 :puntuacionMax(puntajeMax,nombreMax,tiradasMax);
break;
case 22 :system("cls");
    cout<<"GRACIAS POR JUGAR ! ! !"<<endl;
    return 0;
break;
default :;
}
system("cls");
}
    return 0;
}
