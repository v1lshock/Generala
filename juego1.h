#ifndef JUEGO1_H_INCLUDED
#define JUEGO1_H_INCLUDED

#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>

using namespace std;

#include "funciones.h"
#include "Combinaciones.h"

void juego1(char nombre[],char nombreMax[],int puntajeTotal,int &puntajeMax,int conTiradasTotales,int &tiradasMax,bool finalizar,bool puntajeMaxFlag);
void puntuacionMax ();

void juego1(char nombre[],char nombreMax[],int puntajeTotal,int &puntajeMax,int conTiradasTotales,int &tiradasMax,bool finalizar,bool puntajeMaxFlag) {

       system("cls");
        cout<<"INGRESE SU NOMBRE : "<<endl;
        cin>>nombre;

    int dados[5],contTiradas,cuantosTirar,CualTirar,contarRondas=1;
    int contarDados[5], juegoElegido;
    int i, puntaje[10], contFin=0,tachar;
    bool generala,poker,full,escalera,juegode1,juegode2,juegode3,juegode4,juegode5,juegode6;
    finalizar=false;
    char decision,NombresJugadas[10][20];

    ponerMenosUno(puntaje, 10);
    while(finalizar==false){
      system("cls");

      contTiradas=1;
      cout<<"JUGADOR: "<<nombre<<" | "<<"RONDA NUMERO: "<<contarRondas<<" | PUNTAJE TOTAL: "<<puntajeTotal<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cout<<"TIRADA NUMERO: "<<contTiradas<<" - "<<"TIRADAS TOTALES: "<<conTiradasTotales<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cargarAleatorio(dados, 5,6);
      ///cargarVector(dados,5);
      contarDadosRepetidos(dados, 5, contarDados, 5);
      MenuDeDados(dados);cout << "\n" << "\n" << endl;
      generala=Generala(contarDados, 5);
      if(generala&&conTiradasTotales==1){
        system("cls");
             cout<<"JUGADOR: "<<nombre<<" | "<<"RONDA NUMERO: "<<contarRondas<<" | PUNTAJE TOTAL: "<<puntajeTotal<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cout<<"TIRADA NUMERO: "<<contTiradas<<" - "<<"TIRADAS TOTALES: "<<conTiradasTotales<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
        MenuDeDados(dados);cout << "\n" << "\n" << endl;
        cout<<endl;
        cout<<"GENERALA SERVIDA ! ! !";
        cout<<endl;
        system("pause");
        finalizar=true;

      } else while(contTiradas!=3){

      cout<<endl;
      cout<<"A: ANOTAR PUNTAJE OBTENIDO."<<endl;
      cout<<"B: VOLVER A TIRAR LOS DADOS."<<endl;
      cin>>decision;
      if(decision=='B'||decision=='b'){

        contTiradas++;
        conTiradasTotales++;
        cout<<"¿CUANTOS DADOS DESEA VOLVER A TIRAR?"<<endl;
        cin>>cuantosTirar;
        for(i=1;i<=cuantosTirar;i++){

        cout<<"CUAL?"<<endl;
        cin>>CualTirar;///dados[CualTirar-1]

        dadoAleatorio(dados, 6, CualTirar-1);
        cout<<endl;
        contarDadosRepetidos(dados, 5, contarDados, 5);
            }
            MenuDeDados(dados);cout << "\n" << "\n" << endl;
        }
        system("cls");
      cout<<"JUGADOR: "<<nombre<<" | "<<"RONDA NUMERO: "<<contarRondas<<" | PUNTAJE TOTAL: "<<puntajeTotal<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cout<<"TIRADA NUMERO: "<<contTiradas<<" - "<<"TIRADAS TOTALES: "<<conTiradasTotales<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
        MenuDeDados(dados);cout << "\n" << "\n" << endl;

        if(decision=='A'||contTiradas==3||decision=='a'){
        contTiradas=3;
        cout<<"Guardar Juego"<<endl;

        generala=Generala(contarDados, 5);
        poker=Poker(contarDados, 5);
        full=Full(contarDados, 5);
        escalera=Escalera(dados, 5);
        juegode1=juegosDe1(dados, 5);
        juegode2=juegosDe2(dados, 5);
        juegode3=juegosDe3(dados, 5);
        juegode4=juegosDe4(dados, 5);
        juegode5=juegosDe5(dados, 5);
        juegode6=juegosDe6(dados, 5);

        if(juegode1 && puntaje[0]==-1){
            cout<<endl;
               cout<< "1. Juego de 1";
        }
        if(juegode2 && puntaje[1]==-1){
            cout<<endl;
               cout<< "2. Juego de 2";
        }
        if(juegode3 && puntaje[2]==-1){
            cout<<endl;
               cout<< "3. Juego de 3";
        }
        if(juegode4 && puntaje[3]==-1){
            cout<<endl;
               cout<< "4. Juego de 4";
        }
        if(juegode5 && puntaje[4]==-1){
            cout<<endl;
               cout<< "5. Juego de 5";
        }
        if(juegode6 && puntaje[5]==-1){
            cout<<endl;
               cout<< "6. Juego de 6";
        }
        if(escalera && puntaje[6]==-1){
            cout<<endl;
               cout<< "7. Escalera";
        }
        if(full && puntaje[7]==-1){
            cout<<endl;
               cout<< "8. Full";
        }
        if(poker && puntaje[8]==-1){
            cout<<endl;
               cout<< "9. Poker";
        }
        if(generala && puntaje[9]==-1){
               cout<<endl;
               cout<< "10. Generala";
            }

        cout<<endl<<"11.Tachar jugadas"<<endl;
                    cin>>juegoElegido;

        if(juegoElegido==11){
                 system("cls");
      cout<<"JUGADOR: "<<nombre<<" | "<<"RONDA NUMERO: "<<contarRondas<<" | PUNTAJE TOTAL: "<<puntajeTotal<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cout<<"TIRADA NUMERO: "<<contTiradas<<" - "<<"TIRADAS TOTALES: "<<conTiradasTotales<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
        MenuDeDados(dados);cout << "\n" << "\n" << endl;
        cout<<endl;
            JuegosTachar(puntaje,10);
            cin>>tachar;
            Tachados(tachar,puntaje,10);
        }

        switch(juegoElegido){
        case 1:  puntaje[0]=contarNumerosRepetidos(dados, 1, 5);
        break;
        case 2: puntaje[1]=contarNumerosRepetidos(dados, 2, 5)*2;
        break;
        case 3: puntaje[2]=contarNumerosRepetidos(dados, 3, 5)*3;
        break;
        case 4: puntaje[3]=contarNumerosRepetidos(dados, 4, 5)*4;
        break;
        case 5: puntaje[4]=contarNumerosRepetidos(dados, 5, 5)*5;
        break;
        case 6: puntaje[5]=contarNumerosRepetidos(dados, 6, 5)*6;
        break;
        case 7: puntaje[6]=25;
        break;
        case 8: puntaje[7]=30;
        break;
        case 9: puntaje[8]=40;
        break;
        case 10: puntaje[9]=50;
        }
        if(juegoElegido!=11){
        if(puntaje[juegoElegido-1]!=-1){
                    puntajeTotal+=puntaje[juegoElegido-1];
                }
        }
        conTiradasTotales++;
      }
        }
        if(contarRondas==10){
                conTiradasTotales--;

                system("cls");
                cout<<nombre<<endl;
                cout<<"Tus tiradas totales fueron: "<<conTiradasTotales<<endl;
                cout<<" Tu Puntaje total fue de: "<<puntajeTotal<<endl;
                system("pause");

            finalizar=true;
            puntajeMaxFlag=sacarMax(puntajeTotal,puntajeMax);
            if(puntajeMaxFlag){
                puntajeMax=puntajeTotal;
                tiradasMax=conTiradasTotales;
                copiarNombre(nombre, nombreMax);
                cout<<puntajeMax<<endl;


            }

        }
        contarRondas++;
    }
      }

      void puntuacionMax (int puntajeMax,char nombreMax[], int tiradasMax){

        system("cls");
        if(puntajeMax==-1){
            cout<<"TODAVIA NO HAY UN PUNTAJE MAXIMO, ELIJA UN MODO DE JUEGO ! ! !"<<endl;
        }else recuadroMax(nombreMax,tiradasMax,puntajeMax);

     system("pause");
    system("cls");
    }

void juego2(char nombre[],char nombreMax[],int puntajeTotal,int puntajeTotal2,int &puntajeMax,int conTiradasTotales,int conTiradasTotales2,int &tiradasMax,bool finalizar,bool puntajeMaxFlag){
    char nombre2[25], nombreJ1J2Max[25];
    system("cls");
         cout<<"INGRESE EL NOMBRE DEL JUGADOR 1: "<<endl;
        cin>>nombre;
         cout<<"INGRESE EL NOMBRE DEL JUGADOR 2: "<<endl;
        cin>>nombre2;
        int dados[5],contTiradas,conTiradasJ1J2Max,cuantosTirar,CualTirar,contarRondas=1;
    int contarDados[5], juegoElegido;
    int puntajeJ1J2Total;
    int i, puntaje[10],puntaje2[10], contFin=0,tachar;
    bool turnos=true,generala,poker,full,escalera,juegode1,juegode2,juegode3,juegode4,juegode5,juegode6,generalaJugador1=false,generalaJugador2=false;
    finalizar=false;
    char decision;
    ponerMenosUno(puntaje, 10);
    ponerMenosUno(puntaje2, 10);
    while(finalizar==false){
        if(turnos==true){
                  system("cls");

      contTiradas=1;
      cout<<"JUGADOR: "<<nombre<<" | "<<"RONDA NUMERO: "<<contarRondas<<" | PUNTAJE TOTAL: "<<puntajeTotal<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cout<<"TIRADA NUMERO: "<<contTiradas<<" - "<<"TIRADAS TOTALES: "<<conTiradasTotales<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cargarAleatorio(dados, 5,6);
      ///cargarVector(dados,5);
      contarDadosRepetidos(dados, 5, contarDados, 5);
      MenuDeDados(dados);cout << "\n" << "\n" << endl;
      generala=Generala(contarDados, 5);
      if(generala&&conTiradasTotales==1){
        system("cls");
             cout<<"JUGADOR: "<<nombre<<" | "<<"RONDA NUMERO: "<<contarRondas<<" | PUNTAJE TOTAL: "<<puntajeTotal<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cout<<"TIRADA NUMERO: "<<contTiradas<<" - "<<"TIRADAS TOTALES: "<<conTiradasTotales<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
        MenuDeDados(dados);cout << "\n" << "\n" << endl;
        cout<<endl;
        cout<<"GENERALA SERVIDA ! ! !";
        cout<<endl;
        generalaJugador1=true;
        turnos=false;
        system("pause");
      } else while(contTiradas!=3){

      cout<<endl;
      cout<<"A: ANOTAR PUNTAJE OBTENIDO."<<endl;
      cout<<"B: VOLVER A TIRAR LOS DADOS."<<endl;
      cin>>decision;
      if(decision=='B'||decision=='b'){
        conTiradasTotales++;
        contTiradas++;

        cout<<"¿CUANTOS DADOS DESEA VOLVER A TIRAR?"<<endl;
        cin>>cuantosTirar;

        for(i=1;i<=cuantosTirar;i++){

        cout<<"CUAL?"<<endl;
        cin>>CualTirar;///dados[CualTirar-1]

        dadoAleatorio(dados, 6, CualTirar-1);
        cout<<endl;
        contarDadosRepetidos(dados, 5, contarDados, 5);
            }
            MenuDeDados(dados);cout << "\n" << "\n" << endl;
        }

        system("cls");
      cout<<"JUGADOR: "<<nombre<<" | "<<"RONDA NUMERO: "<<contarRondas<<" | PUNTAJE TOTAL: "<<puntajeTotal<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cout<<"TIRADA NUMERO: "<<contTiradas<<" - "<<"TIRADAS TOTALES: "<<conTiradasTotales<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
        MenuDeDados(dados);cout << "\n" << "\n" << endl;
        cout<<endl;

        if(decision=='A'||contTiradas==3||decision=='a'){
        contTiradas=3;
        cout<<"Guardar Juego"<<endl;

        generala=Generala(contarDados, 5);
        poker=Poker(contarDados, 5);
        full=Full(contarDados, 5);
        escalera=Escalera(dados, 5);
        juegode1=juegosDe1(dados, 5);
        juegode2=juegosDe2(dados, 5);
        juegode3=juegosDe3(dados, 5);
        juegode4=juegosDe4(dados, 5);
        juegode5=juegosDe5(dados, 5);
        juegode6=juegosDe6(dados, 5);

        if(juegode1 && puntaje[0]==-1){
            cout<<endl;
               cout<< "1. Juego de 1";
        }
        if(juegode2 && puntaje[1]==-1){
            cout<<endl;
               cout<< "2. Juego de 2";
        }
        if(juegode3 && puntaje[2]==-1){
            cout<<endl;
               cout<< "3. Juego de 3";
        }
        if(juegode4 && puntaje[3]==-1){
            cout<<endl;
               cout<< "4. Juego de 4";
        }
        if(juegode5 && puntaje[4]==-1){
            cout<<endl;
               cout<< "5. Juego de 5";
        }
        if(juegode6 && puntaje[5]==-1){
            cout<<endl;
               cout<< "6. Juego de 6";
        }
        if(escalera && puntaje[6]==-1){
            cout<<endl;
               cout<< "7. Escalera";
        }
        if(full && puntaje[7]==-1){
            cout<<endl;
               cout<< "8. Full";
        }
        if(poker && puntaje[8]==-1){
            cout<<endl;
               cout<< "9. Poker";
        }
        if(generala && puntaje[9]==-1){
               cout<<endl;
               cout<< "10. Generala";
            }
        cout<<endl<<"11.Tachar jugadas"<<endl;
                    cin>>juegoElegido;

        if(juegoElegido==11){
                 system("cls");
      cout<<"JUGADOR: "<<nombre<<" | "<<"RONDA NUMERO: "<<contarRondas<<" | PUNTAJE TOTAL: "<<puntajeTotal<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cout<<"TIRADA NUMERO: "<<contTiradas<<" - "<<"TIRADAS TOTALES: "<<conTiradasTotales<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
        MenuDeDados(dados);cout << "\n" << "\n" << endl;
        cout<<endl;
            JuegosTachar(puntaje,10);
            cin>>tachar;
            Tachados(tachar,puntaje,10);
        }

        switch(juegoElegido){
        case 1:  puntaje[0]=contarNumerosRepetidos(dados, 1, 5);
        break;
        case 2: puntaje[1]=contarNumerosRepetidos(dados, 2, 5)*2;
        break;
        case 3: puntaje[2]=contarNumerosRepetidos(dados, 3, 5)*3;
        break;
        case 4:puntaje[3]=contarNumerosRepetidos(dados, 4, 5)*4;
        break;
        case 5: puntaje[4]=contarNumerosRepetidos(dados, 5, 5)*5;
        break;
        case 6: puntaje[5]=contarNumerosRepetidos(dados, 6, 5)*6;
        break;
        case 7: puntaje[6]=25;
        break;
        case 8: puntaje[7]=30;
        break;
        case 9: puntaje[8]=40;
        break;
        case 10: puntaje[9]=50;

        }
        if(juegoElegido!=11){
        if(puntaje[juegoElegido-1]!=-1){
                    puntajeTotal+=puntaje[juegoElegido-1];
                }
        }
            turnos=false;
                    system("cls");
                    entreTurno(contarRondas, nombre,nombre2,conTiradasTotales,puntajeTotal,puntajeTotal2);
                    system("pause");
                    conTiradasTotales++;
      }
        }
        }
        if(turnos==false){
            system("cls");

      contTiradas=1;
      cout<<"JUGADOR: "<<nombre2<<" | "<<"RONDA NUMERO: "<<contarRondas<<" | PUNTAJE TOTAL: "<<puntajeTotal2<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cout<<"TIRADA NUMERO: "<<contTiradas<<" - "<<"TIRADAS TOTALES: "<<conTiradasTotales2<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cargarAleatorio(dados, 5,6);
      ///cargarVector(dados,5);
      contarDadosRepetidos(dados, 5, contarDados, 5);
      MenuDeDados(dados);cout << "\n" << "\n" << endl;
      generala=Generala(contarDados, 5);
      if(generala&&conTiradasTotales2==1){
           system("cls");
             cout<<"JUGADOR: "<<nombre2<<" | "<<"RONDA NUMERO: "<<contarRondas<<" | PUNTAJE TOTAL: "<<puntajeTotal2<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cout<<"TIRADA NUMERO: "<<contTiradas<<" - "<<"TIRADAS TOTALES: "<<conTiradasTotales2<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
        MenuDeDados(dados);cout << "\n" << "\n" << endl;
        cout<<endl;
        cout<<"GENERALA SERVIDA ! ! !";
        cout<<endl;
        generalaJugador2=true;
        system("pause");
      }
        if(generalaJugador1==true && generalaJugador2==true){
            system("cls");
            cout<<"EMPATE"<<endl;
            finalizar=true;
            contTiradas=3;
            system("pause");
        }
        else if(generalaJugador1==true && generalaJugador2==false){
            system("cls");
            cout<<"GANA: "<<nombre<<endl;
            finalizar=true;
            contTiradas=3;
            system("pause");
            }
            if(generalaJugador2==true && generalaJugador1==false){
                system("cls");
            cout<<"GANA: "<<nombre2<<endl;
            finalizar=true;
            contTiradas=3;
            system("pause");
            }
            else while(contTiradas!=3){
                cout<<endl;
      cout<<"A: ANOTAR PUNTAJE OBTENIDO."<<endl;
      cout<<"B: VOLVER A TIRAR LOS DADOS."<<endl;
      cin>>decision;
      if(decision=='B'||decision=='b'){

        contTiradas++;
        conTiradasTotales2++;
        cout<<"¿CUANTOS DADOS DESEA VOLVER A TIRAR?"<<endl;

        cin>>cuantosTirar;

        for(i=1;i<=cuantosTirar;i++){

        cout<<"CUAL?"<<endl;
        cin>>CualTirar;///dados[CualTirar-1]

        dadoAleatorio(dados, 6, CualTirar-1);
        cout<<endl;
        contarDadosRepetidos(dados, 5, contarDados, 5);
            }
            MenuDeDados(dados);cout << "\n" << "\n" << endl;
        }
        system("cls");
      cout<<"JUGADOR: "<<nombre2<<" | "<<"RONDA NUMERO: "<<contarRondas<<" | PUNTAJE TOTAL: "<<puntajeTotal2<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cout<<"TIRADA NUMERO: "<<contTiradas<<" - "<<"TIRADAS TOTALES: "<<conTiradasTotales2<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
        MenuDeDados(dados);cout << "\n" << "\n" << endl;
        cout<<endl;
        if(decision=='A'||contTiradas==3||decision=='a'){
        contTiradas=3;
        cout<<"Guardar Juego"<<endl;
        generala=Generala(contarDados, 5);
        poker=Poker(contarDados, 5);
        full=Full(contarDados, 5);
        escalera=Escalera(dados, 5);
        juegode1=juegosDe1(dados, 5);
        juegode2=juegosDe2(dados, 5);
        juegode3=juegosDe3(dados, 5);
        juegode4=juegosDe4(dados, 5);
        juegode5=juegosDe5(dados, 5);
        juegode6=juegosDe6(dados, 5);
        if(juegode1 && puntaje2[0]==-1){
            cout<<endl;
               cout<< "1. Juego de 1";
        }
        if(juegode2 && puntaje2[1]==-1){
            cout<<endl;
               cout<< "2. Juego de 2";
        }
        if(juegode3 && puntaje2[2]==-1){
            cout<<endl;
               cout<< "3. Juego de 3";
        }
        if(juegode4 && puntaje2[3]==-1){
            cout<<endl;
               cout<< "4. Juego de 4";
        }
        if(juegode5 && puntaje2[4]==-1){
            cout<<endl;
               cout<< "5. Juego de 5";
        }
        if(juegode6 && puntaje2[5]==-1){
            cout<<endl;
               cout<< "6. Juego de 6";
        }
        if(escalera && puntaje2[6]==-1){
            cout<<endl;
               cout<< "7. Escalera";
        }
        if(full && puntaje2[7]==-1){
            cout<<endl;
               cout<< "8. Full";
        }
        if(poker && puntaje2[8]==-1){
            cout<<endl;
               cout<< "9. Poker";
        }
        if(generala && puntaje2[9]==-1){
               cout<<endl;
               cout<< "10. Generala";
            }

        cout<<endl<<"11.Tachar jugadas"<<endl;

                    cin>>juegoElegido;
                      if(juegoElegido==11){
                 system("cls");
      cout<<"JUGADOR: "<<nombre2<<" | "<<"RONDA NUMERO: "<<contarRondas<<" | PUNTAJE TOTAL: "<<puntajeTotal2<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
      cout<<"TIRADA NUMERO: "<<contTiradas<<" - "<<"TIRADAS TOTALES: "<<conTiradasTotales2<<endl;
      cout<<"------------------------------------------------------------------"<<endl;
        MenuDeDados(dados);cout << "\n" << "\n" << endl;
        cout<<endl;
           JuegosTachar(puntaje2,10);
            cin>>tachar;
            Tachados(tachar,puntaje2,10);
        }
        switch(juegoElegido){
        case 1:  puntaje2[0]=contarNumerosRepetidos(dados, 1, 5);
        break;
        case 2: puntaje2[1]=contarNumerosRepetidos(dados, 2, 5)*2;
        break;
        case 3: puntaje2[2]=contarNumerosRepetidos(dados, 3, 5)*3;
        break;
        case 4: puntaje2[3]=contarNumerosRepetidos(dados, 4, 5)*4;
        break;
        case 5: puntaje2[4]=contarNumerosRepetidos(dados, 5, 5)*5;
        break;
        case 6: puntaje2[5]=contarNumerosRepetidos(dados, 6, 5)*6;
        break;
        case 7: puntaje2[6]=25;
        break;
        case 8: puntaje2[7]=30;
        break;
        case 9: puntaje2[8]=40;
        break;
        case 10: puntaje2[9]=50;

        }
             if(juegoElegido!=11){
        if(puntaje2[juegoElegido-1]!=-1){
                    puntajeTotal2+=puntaje2[juegoElegido-1];
                }
        }
            turnos=true;
            system ("cls");
            entreTurno(contarRondas, nombre2,nombre,conTiradasTotales2,puntajeTotal2,puntajeTotal);
                    system("pause");
                    conTiradasTotales2++;
    }
            }

        if(contarRondas==10){
                conTiradasTotales--;
                conTiradasTotales2--;
                system("cls");
                if(puntajeTotal>puntajeTotal2){
                        puntajeJ1J2Total=puntajeTotal;
                        conTiradasJ1J2Max=conTiradasTotales;
                        copiarNombre(nombre, nombreJ1J2Max);
                cout<<"GANADOR ! ! !"<<endl;
                cout<<nombre<<endl;
                cout<<"TUS TIRADAS TOTALES FUERON: "<<conTiradasTotales<<endl;
                cout<<" TU PUNTAJE TOTAL FUE DE: "<<puntajeTotal<<endl;
                }else{
                    puntajeJ1J2Total=puntajeTotal2;
                    conTiradasJ1J2Max=conTiradasTotales2;
                    copiarNombre(nombre2, nombreJ1J2Max);
                cout<<"GANADOR ! ! !"<<endl;
                cout<<nombre2<<endl;
                cout<<"TUS TIRADAS TOTALES FUERON: "<<conTiradasTotales2<<endl;
                cout<<" TU PUNTAJE TOTAL FUE DE: "<<puntajeTotal2<<endl;
                }
            finalizar=true;
            system("pause");
            puntajeMaxFlag=sacarMax(puntajeJ1J2Total,puntajeMax);
            if(puntajeMaxFlag){
                puntajeMax=puntajeJ1J2Total;
                tiradasMax=conTiradasJ1J2Max;
                copiarNombre(nombreJ1J2Max, nombreMax);
            }
        }
        contarRondas++;
        }
        }
        }
#endif // JUEGO1_H_INCLUDED

