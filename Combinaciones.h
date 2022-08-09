#ifndef COMBINACIONES_H_INCLUDED
#define COMBINACIONES_H_INCLUDED


#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>
using namespace std;
#include "funciones.h"
#include "juego1.h"

int juegos(int contarDados, int tam, int primerJuego, int segundoJuego, int tercerJuego, int cuartoJuego, int quintoJuego);
bool Generala(int contarDados[], int tam,bool generala);
bool Poker(int contarDados[], int tam);
bool Escalera (int dados[], int tam);
bool Full(int contarDados[], int tam);

bool juegosDe1(int contarDados[], int tam){
int i;
bool juegode1=false;
for(i=0;i<tam;i++){
    if(contarDados[i]==1){juegode1=true;}
}
return juegode1;
}

bool juegosDe2(int contarDados[], int tam){
int i;
bool juegode2=false;
for(i=0;i<tam;i++){
    if(contarDados[i]==2){juegode2=true;}
}
return juegode2;
}

bool juegosDe3(int contarDados[], int tam){
int i;
bool juegode3=false;
for(i=0;i<tam;i++){
    if(contarDados[i]==3){juegode3=true;}
}
return juegode3;
}

bool juegosDe4(int contarDados[], int tam){
int i;
bool juegode4=false;
for(i=0;i<tam;i++){
    if(contarDados[i]==4){juegode4=true;}
}
return juegode4;
}

bool juegosDe5(int contarDados[], int tam){
int i;
bool juegode5=false;
for(i=0;i<tam;i++){
    if(contarDados[i]==5){juegode5=true;}
}
return juegode5;
}

bool juegosDe6(int contarDados[], int tam){
int i;
bool juegode6=false;
for(i=0;i<tam;i++){
    if(contarDados[i]==6){juegode6=true;}
}
return juegode6;
}



bool Generala(int contarDados[], int tam){
int i,j,cont=0;
bool generala=false;
for(i=0;i<tam;i++){
    if(contarDados[i]==5){
        cont++;
    }
}
if(cont==5){generala=true;}
return generala;

}

bool Poker(int contarDados[],int tam){ //Caso de POKER
int i,cont=0;
bool poker=false;
for(i=0;i<tam;i++){
            if(contarDados[i]==4){cont++;}
}
            if(cont==4){poker=true;}
            return poker;

}

bool Escalera (int dados[], int tam){
int con=0;
bool escalera=false;
ordenarVector(dados, tam);
if(dados[con]==1 && dados[con+1]==2 && dados[con+2]==3 && dados[con+3]==4 && dados[con+4]==5){
    escalera=true;
}
else if(dados[con]==2 && dados[con+1]==3 && dados[con+2]==4 && dados[con+3]==5 && dados[con+4]==6){escalera=true;}
return escalera;

}

bool Full(int contar[],int tam){ //Caso de FULL
int i,cont=0,cont2=0;
bool full=false;
for(i=0;i<tam;i++){
            if(contar[i]==2){cont++;}
            if(contar[i]==3){cont2++;}
           }
            if(cont==2 && cont2==3){full=true;}

            else{if(cont==3 && cont2==2){full=true;}
            }
            return full;

}

#endif // COMBINACIONES_H_INCLUDED
