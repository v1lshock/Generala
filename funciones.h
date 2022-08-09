#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>

using namespace std;
#include "rlutil.h"
#define ABAJO 80
#define ARRIBA 72
#define ENTER 13


/// DECLARACIÓN/PROTOTIPO DE FUNCIONES
void cargarVector(int v[], int tam);///asigna valores a cada una de las posiciones del vector

void mostrarVector(int v[], int tam);/// muestra lo que contiene cada una de las posiciones del vector

void ponerCero(int v[], int tam);/// pone en 0 todas las posiciones del vector

void contarDadosRepetidos(int v[],int tam,int contar[]);///Cuenta los dados repetidos

int contarNumerosRepetidos(int v[], int numero, int tam);///cuenta los numeros repetidos

void cargarAleatorio(int v[], int tam, int limite);///asigna valores aleatorios a cada al vector

void ordenarVector(int v[], int tam );/// ordena de menor a mayor un vector

int sumarVector(int v[], int tam ); /// suma los valores contenidos en el vector

void copiarVector(int v[], int v2[],int tam ); ///copia el vector v en v2

void dadoAleatorio(int v[], int limite, int posicion);///Genera un solo dado aleatorio

bool compararVectores(int v[], int v2[],int tam );/// compara los dos vectores que recibe. Si son iguales ///devuelve true, si no devuelve false

void ponerMenosUno(int v[], int tam);
void dadoAleatorio(int v[], int limite, int posicion);
int JuegosTachar(int v[],int tam);
int Tachados(int v,int puntaje[],int tam);
void copiarNombre(char nombre[],char nombreMax[]);
bool sacarMax(int puntajeTotal,int puntajeMax);

/// Desarrollo de funciones / Definiciones
bool sacarMax(int puntajeTotal,int puntajeMax){
    bool puntajeMaxFlag=false;
if(puntajeTotal>=puntajeMax){
    puntajeMax=puntajeTotal;
    puntajeMaxFlag=true;
}
return puntajeMaxFlag;
}

void copiarNombre(char nombre[],char nombreMax[]){
int i;
for(i=0;i<=25;i++){
    nombreMax[i]=nombre[i];
}
}

int Tachados(int v,int puntaje[],int tam){

        switch(v){
        case 1:  puntaje[0]=0;
        break;
        case 2: puntaje[1]=0;
        break;
        case 3: puntaje[2]=0;
        break;
        case 4:puntaje[3]=0;
        break;
        case 5: puntaje[4]=0;
        break;
        case 6: puntaje[5]=0;
        break;
        case 7: puntaje[6]=0;
        break;
        case 8: puntaje[7]=0;
        break;
        case 9: puntaje[8]=0;
        break;
        case 10: puntaje[9]=0;

        }}
int JuegosTachar(int v[],int tam){

        if(v[0]==-1){
            cout<<endl;
               cout<< "1. Juego de 1";
        }
        if(v[1]==-1){
            cout<<endl;
               cout<< "2. Juego de 2";
        }
        if(v[2]==-1){
            cout<<endl;
               cout<< "3. Juego de 3";
        }
        if(v[3]==-1){
            cout<<endl;
               cout<< "4. Juego de 4";
        }
        if(v[4]==-1){
            cout<<endl;
               cout<< "5. Juego de 5";
        }
        if(v[5]==-1){
            cout<<endl;
               cout<< "6. Juego de 6";
        }
        if(v[6]==-1){
            cout<<endl;
               cout<< "7. Escalera";
        }
         if(v[7]==-1){
            cout<<endl;
               cout<< "8. Full";
        }
          if(v[8]==-1){
            cout<<endl;
               cout<< "9. Poker";
        }
         if(v[9]==-1){
               cout<<endl;
               cout<< "10. Generala";
            }
            cout<<endl;
            cout<<"Elegir cual tachar "<<endl;
        }

void dadoAleatorio(int v[], int limite, int posicion){
 srand(time(NULL));
 v[posicion]=rand()%limite+1;

}

int contarNumerosRepetidos(int v[], int numero, int tam){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(v[i]==numero) cant++;
        }
    return cant;
}

int posicionNumeroEnVector(int v[],int tam, int numero){
    int i;
    for(i=0;i<tam;i++){
        if(v[i]==numero) return i;
        }
    return -1;
}
int contarUnos(int v[], int tam){
  int i, unos=0;
  for(i=0;i<tam;i++){
    if(v[i]==1){
        unos++;
    }
  }
  return unos;
}

void ordenarVector(int v[], int tam ){
    int i,j, posmin, aux;
    for(i=0;i<tam-1;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
            if(v[j]<v[posmin]) posmin=j;
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}

void cargarAleatorio(int v[], int tam, int limite){
  int i;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;
  }
}

void mostrarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<"\t";
    }
}

void contarDadosRepetidos(int v[],int tam,int contar[],int tam2){ ///Funcion esencial para el full, poker y generala
int i,x,contador=0;
for(i=0;i<tam;i++){
    for(x=0;x<tam;x++){
        if(v[i]==v[x]){contador++;}
    }
   contar[i]=contador;
   contador=0;
}
}

void ponerCero(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        v[i]=0;
    }
}
void ponerMenosUno(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        v[i]=-1;
    }
}

int sumarVector(int v[], int tam ){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=v[i];
    }
    return suma;
}

void copiarVector(int v[], int v2[],int tam ){
    int i;
    for(i=0;i<tam;i++){
        v2[i]=v[i];
    }
}

bool compararVectores(int v[], int v2[],int tam ){
   int i;
    for(i=0;i<tam;i++){
        if(v2[i]!=v[i]) return false;
    }
    return true;
}

void cargarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"INGRESE NUMERO: ";
        cin>>v[i];
    }
}
void recuadroMenu() { ///Recuadro del menu
    int i, j,x;
    rlutil::setColor(rlutil::CYAN);
    for (i=51; i<=78;i++){

        rlutil::locate(i, 15); printf("%c", 238 );
    }
    for (j = 30; j <= 100; j++) {
   rlutil::locate(j, 10); printf("%c", 205);
        rlutil::locate(j, 30); printf("%c", 205);
        for (x = 10; x <= 30; x++) {
            rlutil::locate(30, x); printf("%c", 186);
            rlutil::locate(100, x); printf("%c", 186);
        }
    }
    rlutil::locate(30, 30); printf("%c", 200); ///ESQUINA ABAJO A LA IZQUIERDA
    rlutil::locate(30, 10); printf("%c", 201); ///ESQUINA ARRIBA A LA IZQUIERDA
    rlutil::locate(100, 10); printf("%c", 187); ///ESQUINA ARRIBA A LA DERECHA
    rlutil::locate(100, 30); printf("%c", 188); ///ESQUINA ABAJO A LA DERECHA

    cout << endl;
    cout << endl;
}
void recuadroMax(char nombreMax[], int tiradasMax,int puntajeMax) { //Recuadro de puntuacionMax
    int i, j,x;
    rlutil::setColor(rlutil::CYAN);

    for (j = 41; j <= 84; j++) {
   rlutil::locate(j, 7); printf("%c", 205);///Linea horizontal arriba
        rlutil::locate(j, 18); printf("%c", 205);///Linea horizontal abajo
        for (x = 8; x <= 17; x++) {
            rlutil::locate(40, x); printf("%c", 186);///Linea vertical izquierda
            rlutil::locate(85, x); printf("%c", 186);///Linea vertical derecha
        }
    }
    rlutil::locate(58,10);
    std::cout<<nombreMax<<endl;
    rlutil::locate(56,11);
    cout<<"TIRADAS: "<<tiradasMax<<endl;
    rlutil::locate(53,12);
    cout<<"PUNTAJE FINAL: "<<puntajeMax<<endl;
    rlutil::locate(40, 18); printf("%c", 200); ///ESQUINA ABAJO A LA IZQUIERDA
    rlutil::locate(40, 7); printf("%c", 201); ///ESQUINA ARRIBA A LA IZQUIERDA
    rlutil::locate(85, 7); printf("%c", 187); ///ESQUINA ARRIBA A LA DERECHA
    rlutil::locate(85, 18); printf("%c", 188); ///ESQUINA ABAJO A LA DERECHA

    cout << endl;
    cout << endl;
}

void entreTurno(int contarRondas,char nombre[],char nombre2[],int conTiradasTotales,int puntajeTotal,int puntajeTotal2) { //Recuadro de cambio de turno
    int i, j,x;
    rlutil::setColor(rlutil::CYAN);

    for (j = 41; j <= 84; j++) {
   rlutil::locate(j, 7); printf("%c", 205);///Linea horizontal arriba
        rlutil::locate(j, 18); printf("%c", 205);///Linea horizontal abajo
        for (x = 8; x <= 17; x++) {
            rlutil::locate(40, x); printf("%c", 186);///Linea vertical izquierda
            rlutil::locate(85, x); printf("%c", 186);///Linea vertical derecha
        }
    }
    rlutil::locate(53,10);
    std::cout<<"    RONDA NRO: "<<contarRondas<<endl;
    rlutil::locate(53,11);
    cout<<"PROXIMO TURNO: "<<nombre2<<endl;
    rlutil::locate(53,12);
    cout<<"    TIRADAS: "<<conTiradasTotales<<endl;
    rlutil::locate(53,14);
    cout<<"PUNTAJE DE "<<nombre<<": "<<puntajeTotal<<endl;
    rlutil::locate(53,15);
    cout<<"PUNTAJE DE "<<nombre2<<": "<<puntajeTotal2<<endl;
    rlutil::locate(40, 18); printf("%c", 200); ///ESQUINA ABAJO A LA IZQUIERDA
    rlutil::locate(40, 7); printf("%c", 201); ///ESQUINA ARRIBA A LA IZQUIERDA
    rlutil::locate(85, 7); printf("%c", 187); ///ESQUINA ARRIBA A LA DERECHA
    rlutil::locate(85, 18); printf("%c", 188); ///ESQUINA ABAJO A LA DERECHA

    cout << endl;
    cout << endl;
}

int MenuPrincipalGenerala() {

     int x = 51, y = 19;
    rlutil::hidecursor();

    rlutil::cls();

    rlutil::setBackgroundColor(rlutil::BLACK);
    rlutil::setColor(rlutil::LIGHTCYAN);

    rlutil::locate(50,14);
    std::cout << " BIENVENIDO A LA GENERALA !!! " << std::endl;

    rlutil::locate(53,19);
    std::cout << "1. JUEGO NUEVO DE A UNO" << std::endl;
    rlutil::locate(53,20);
    std::cout << "2. JUEGO NUEVO DE A DOS" << std::endl;
    rlutil::locate(53,21);
    std::cout << "3. MAYOR PUNTUACION" << std::endl;
    rlutil::locate(53,22);
    std::cout << "0. SALIR" << std::endl;

    recuadroMenu();

rlutil::locate(x, y); printf("*"); ///Utilizar flechas del teclado
    bool elegir = false;
    while (!elegir) {
        if (_kbhit()) {
            rlutil::locate(x, y); printf(" ");
            char tecla = _getch();
            if (tecla == ENTER) { elegir = true; return y; }
            if (tecla == ARRIBA && y > 19) rlutil::locate(x, y--);
            if (tecla == ABAJO && y < 22) rlutil::locate(x, y++);
            rlutil::locate(x, y); printf("*");
        }
    }
}

void dadouno() { /// Dado dibujado en la primera posicion

    /// HORIZONTAL
    for (int i = 2; i < 10; i++) {
        rlutil::locate(i, 6); printf("%c", 205);
        rlutil::locate(i, 10); printf("%c", 205);
    }
    /// VERTICAL
    for (int i = 6; i < 10; i++) {
        rlutil::locate(2, i); printf("%c", 186);
        rlutil::locate(10, i); printf("%c", 186);
    }
    ///ESQUINAS
    rlutil::locate(2, 6); printf("%c", 201);
    rlutil::locate(2, 10); printf("%c", 200);
    rlutil::locate(10, 6); printf("%c", 187);
    rlutil::locate(10, 10); printf("%c", 188);
}

void dadoDos() {/// Dado dibujado en la segunda posicion

    /// HORIZONTAL
    for (int i = 13; i < 20; i++) {
        rlutil::locate(i, 6); printf("%c", 205);
        rlutil::locate(i, 10); printf("%c", 205);
    }
    /// VERTICAL
    for (int i = 6; i < 10; i++) {
        rlutil::locate(12, i); printf("%c", 186);
        rlutil::locate(20, i); printf("%c", 186);
    }
    ///ESQUINAS
    rlutil::locate(12, 6); printf("%c", 201);
    rlutil::locate(12, 10); printf("%c", 200);
    rlutil::locate(20, 6); printf("%c", 187);
    rlutil::locate(20, 10); printf("%c", 188);
}

void dadoTres() {/// Dado dibujado en la tercera posicion

    /// HORIZONTAL
    for (int i = 23; i < 30; i++) {
        rlutil::locate(i, 6); printf("%c", 205);
        rlutil::locate(i, 10); printf("%c", 205);
    }
    /// VERTICAL
    for (int i = 6; i < 10; i++) {
        rlutil::locate(22, i); printf("%c", 186);
        rlutil::locate(30, i); printf("%c", 186);
    }
    ///ESQUINAS
    rlutil::locate(22, 6); printf("%c", 201);
    rlutil::locate(22, 10); printf("%c", 200);
    rlutil::locate(30, 6); printf("%c", 187);
    rlutil::locate(30, 10); printf("%c", 188);
}

void dadoCuatro() {/// Dado dibujado en la cuarta posicion

    /// HORIZONTAL
    for (int i = 32; i < 40; i++) {
        rlutil::locate(i, 6); printf("%c", 205);
        rlutil::locate(i, 10); printf("%c", 205);
    }
    /// VERTICAL
    for (int i = 6; i < 10; i++) {
        rlutil::locate(32, i); printf("%c", 186);
        rlutil::locate(40, i); printf("%c", 186);
    }
    ///ESQUINAS
    rlutil::locate(32, 6); printf("%c", 201);
    rlutil::locate(32, 10); printf("%c", 200);
    rlutil::locate(40, 6); printf("%c", 187);
    rlutil::locate(40, 10); printf("%c", 188);
}

void dadoCinco() {/// Dado dibujado en la quinta posicion

    /// HORIZONTAL
    for (int i = 42; i < 50; i++) {
        rlutil::locate(i, 6); printf("%c", 205);
        rlutil::locate(i, 10); printf("%c", 205);
    }
    /// VERTICAL
    for (int i = 6; i < 10; i++) {
        rlutil::locate(42, i); printf("%c", 186);
        rlutil::locate(50, i); printf("%c", 186);
    }
    ///ESQUINAS
    rlutil::locate(42, 6); printf("%c", 201);
    rlutil::locate(42, 10); printf("%c", 200);
    rlutil::locate(50, 6); printf("%c", 187);
    rlutil::locate(50, 10); printf("%c", 188);
}

void MenuDeDados(int dados[]) {    ///Dibujo de dados respecto los que toque
    int i;
    dadouno(); dadoDos(); dadoTres(); dadoCuatro(); dadoCinco();
    for (i = 0; i <5; i++) {
        switch (dados[i]) {
        /*dado 1*/ case 1:
            if (i == 0) { rlutil::locate(6, 8); printf("%c", 254); }
            if (i == 1) { rlutil::locate(16, 8); printf("%c", 254); }
            if (i == 2) { rlutil::locate(26, 8); printf("%c", 254); }
            if (i == 3) { rlutil::locate(36, 8); printf("%c", 254); }
            if (i == 4) { rlutil::locate(46, 8); printf("%c", 254); }

            ; break;

        /*dado 2*/ case 2:
            if (i == 0) {
                rlutil::locate(4, 7); printf("%c", 254);
                rlutil::locate(8, 9); printf("%c", 254);
            }

            if (i == 1) {
                rlutil::locate(14, 7); printf("%c", 254);
                rlutil::locate(18, 9); printf("%c", 254);
            }
            if (i == 2) {
                rlutil::locate(24, 7); printf("%c", 254);
                rlutil::locate(28, 9); printf("%c", 254);
            }
            if (i == 3) {
                rlutil::locate(34, 7); printf("%c", 254);
                rlutil::locate(38, 9); printf("%c", 254);
            }
            if (i == 4) {
                rlutil::locate(44, 7); printf("%c", 254);
                rlutil::locate(48, 9); printf("%c", 254);
            }

            ; break;
        /*dado 3*/  case 3:
            if (i == 0) {
                rlutil::locate(6, 8); printf("%c", 254);
                rlutil::locate(8, 7); printf("%c", 254);
                rlutil::locate(4, 9); printf("%c", 254);
            }

            if (i == 1) {
                rlutil::locate(16, 8); printf("%c", 254);
                rlutil::locate(18, 7); printf("%c", 254);
                rlutil::locate(14, 9); printf("%c", 254);
            }

            if (i == 2) {
                rlutil::locate(26, 8); printf("%c", 254);
                rlutil::locate(28, 7); printf("%c", 254);
                rlutil::locate(24, 9); printf("%c", 254);
            }

            if (i == 3) {
                rlutil::locate(36, 8); printf("%c", 254);
                rlutil::locate(38, 7); printf("%c", 254);
                rlutil::locate(34, 9); printf("%c", 254);
            }

            if (i == 4) {
                rlutil::locate(46, 8); printf("%c", 254);
                rlutil::locate(48, 7); printf("%c", 254);
                rlutil::locate(44, 9); printf("%c", 254);
            }

            ; break;

        /*dado 4*/ case 4:
            if (i == 0) {
                rlutil::locate(4, 7); printf("%c", 254);
                rlutil::locate(4, 9); printf("%c", 254);
                rlutil::locate(8, 7); printf("%c", 254);
                rlutil::locate(8, 9); printf("%c", 254);
            }

            if (i == 1) {
                rlutil::locate(14, 7); printf("%c", 254);

                rlutil::locate(14, 9); printf("%c", 254);
                rlutil::locate(18, 7); printf("%c", 254);
                rlutil::locate(18, 9); printf("%c", 254);
            }

            if (i == 2)

            {
                rlutil::locate(24, 7); printf("%c", 254);
                rlutil::locate(24, 9); printf("%c", 254);
                rlutil::locate(28, 7); printf("%c", 254);
                rlutil::locate(28, 9); printf("%c", 254);
            }


            if (i == 3)

            {
                rlutil::locate(34, 7); printf("%c", 254);
                rlutil::locate(34, 9); printf("%c", 254);
                rlutil::locate(38, 7); printf("%c", 254);
                rlutil::locate(38, 9); printf("%c", 254);
            }
            if (i == 4) {
                rlutil::locate(44, 7); printf("%c", 254);
                rlutil::locate(44, 9); printf("%c", 254);
                rlutil::locate(48, 7); printf("%c", 254);
                rlutil::locate(48, 9); printf("%c", 254);
            }

            break;

        /*dado 5*/ case 5:
            if (i == 0)
            {
                rlutil::locate(4, 7); printf("%c", 254);
                rlutil::locate(4, 9); printf("%c", 254);
                rlutil::locate(8, 7); printf("%c", 254);
                rlutil::locate(6, 8); printf("%c", 254);
                rlutil::locate(8, 9); printf("%c", 254);
            }
            if (i == 1)
            {
                rlutil::locate(14, 7); printf("%c", 254);
                rlutil::locate(14, 9); printf("%c", 254);
                rlutil::locate(18, 7); printf("%c", 254);
                rlutil::locate(16, 8); printf("%c", 254);
                rlutil::locate(18, 9); printf("%c", 254);
            }
            if (i == 2)
            {
                rlutil::locate(24, 7); printf("%c", 254);
                rlutil::locate(24, 9); printf("%c", 254);
                rlutil::locate(28, 7); printf("%c", 254);
                rlutil::locate(26, 8); printf("%c", 254);
                rlutil::locate(28, 9); printf("%c", 254);
            }
            if (i == 3) {
                rlutil::locate(34, 7); printf("%c", 254);
                rlutil::locate(34, 9); printf("%c", 254);
                rlutil::locate(38, 7); printf("%c", 254);
                rlutil::locate(36, 8); printf("%c", 254);
                rlutil::locate(38, 9); printf("%c", 254);
            }
            if (i == 4)
            {
                rlutil::locate(44, 7); printf("%c", 254);
                rlutil::locate(44, 9); printf("%c", 254);
                rlutil::locate(48, 7); printf("%c", 254);
                rlutil::locate(46, 8); printf("%c", 254);
                rlutil::locate(48, 9); printf("%c", 254);
            }

            break;

        /*dado 6*/  case 6:
            if (i == 0) {
                rlutil::locate(4, 7); printf("%c", 254);
                rlutil::locate(4, 9); printf("%c", 254);
                rlutil::locate(8, 7); printf("%c", 254);
                rlutil::locate(4, 8); printf("%c", 254);
                rlutil::locate(8, 8); printf("%c", 254);
                rlutil::locate(8, 9); printf("%c", 254);
            }
            if (i == 1) {
                rlutil::locate(14, 7); printf("%c", 254);
                rlutil::locate(14, 9); printf("%c", 254);
                rlutil::locate(18, 7); printf("%c", 254);
                rlutil::locate(14, 8); printf("%c", 254);
                rlutil::locate(18, 8); printf("%c", 254);
                rlutil::locate(18, 9); printf("%c", 254);
            }
            if (i == 2) {
                rlutil::locate(24, 7); printf("%c", 254);
                rlutil::locate(24, 9); printf("%c", 254);
                rlutil::locate(28, 7); printf("%c", 254);
                rlutil::locate(24, 8); printf("%c", 254);
                rlutil::locate(28, 8); printf("%c", 254);
                rlutil::locate(28, 9); printf("%c", 254);
            }
            if (i == 3) {
                rlutil::locate(34, 7); printf("%c", 254);
                rlutil::locate(34, 9); printf("%c", 254);
                rlutil::locate(38, 7); printf("%c", 254);
                rlutil::locate(34, 8); printf("%c", 254);
                rlutil::locate(38, 8); printf("%c", 254);
                rlutil::locate(38, 9); printf("%c", 254);
            }
            if (i == 4) {
                rlutil::locate(44, 7); printf("%c", 254);
                rlutil::locate(44, 9); printf("%c", 254);
                rlutil::locate(48, 7); printf("%c", 254);
                rlutil::locate(44, 8); printf("%c", 254);
                rlutil::locate(48, 8); printf("%c", 254);
                rlutil::locate(48, 9); printf("%c", 254);
            }
            ; break;
        }
    }
}

#endif // FUNCIONES_H_INCLUDED
