
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <time.h> 
using namespace std;
int Menu() {
    int opcion;
    cout << " Menu" << endl;
    cout << "1. Jugar." << endl;
    cout << "2. Puntajes." << endl;
    cout << "3. Creditos." << endl;
    cout << "4. Instrucciones." << endl;
	cout << "5. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    return opcion;
}
struct nombrePunt {
    char apodo[20];
    int puntaje;
};
int lanzarDado(){
    char lanzar;
    int dado1,dado2,suma=0;
    cout <<"*****************************************************************************"<< endl;
	cout <<"*****Presione la tecla (s) seguido de un enter para lanzar los dos dados*****" << endl;
	cout <<"*****************************************************************************"<< endl;
    cin >> lanzar;
    if(lanzar=='s')
    {
        srand(time(NULL));
        dado1=1+rand()%(7-1);
        dado2=1+rand()%(7-1);
        suma=dado1+dado2;
        cout << endl<<"Primer dado: " << dado1 << "             Segundo dado: " << dado2 << endl; 
        cout<<"La suma de los dos dados es: "<<suma<<endl <<endl; 
        return suma;
    }
    }
    int evaluar(){
        int suma=0,suma2=0,rep=1,puntos=0;
    bool seguir=true;
    suma= lanzarDado();
    if (suma==7 || suma==11){
    	puntos=100;
        cout<<"Felicidades haz ganado (Tu puntaje es de 100 puntos)"<<endl;
    }
    if(suma==2||suma==3||suma==12){
    	puntos=0;
        cout<<endl<<"Haz perdido, tu puntaje es 0"<<endl;
    }
    if(suma==4||suma==5||suma==6||suma==8||suma==9||suma==10){
        cout<<"Para ganar debes sacar el valor de tu punto que es: "<<suma<<endl;
        seguir=true;
        while(seguir==true){
            suma2=lanzarDado();
            if (suma2==7){
                seguir=false;
                puntos=0;
                cout<<"Haz perdido, tu puntaje es 0"<<endl;    
            }
            rep+=1;
            if (suma==suma2){
            	puntos=100/rep;
                cout<<"Haz ganado tu puntaje es: "<<puntos<<endl;
                seguir=false;
            }
            
        }
        
    }
    return puntos;
    }
int main()
{
    char presiono, lanzar, decision;
    int opcion, espacio1 = 0, espacio2 = 0 , dado1 = 0, dado2 = 0, puntos=0; 
    bool repetir = true;
    nombrePunt* historial1 = new nombrePunt[20];
    nombrePunt* historial2 = new nombrePunt[20];
    cout << "\t************ ************  ************ ************ ************" << endl;
    cout << "\t************ ************* ************ ************ ************" << endl;
    cout << "\t************ ****     **** ***      *** ****     *** ************" << endl;
    cout << "\t************ ****     **** ***      *** ****     *** ****        " << endl;
    cout << "\t*****        ****     **** ***      *** ****     *** ****        " << endl;
    cout << "\t*****        ****     **** ***      *** ****     *** ****        " << endl;
    cout << "\t*****        ************* ************ ************ ************" << endl;
    cout << "\t*****        ************  ************ ************ ************" << endl;
    cout << "\t*****        **** *****    ************ ************ ************" << endl;
    cout << "\t*****        ****  ****    ***      *** ****                 ****" << endl;
    cout << "\t*****        ****  ****    ***      *** ****                 ****" << endl;
    cout << "\t*****        ****   ****   ***      *** ****                 ****" << endl;
    cout << "\t************ ****   ****   ***      *** ****         ************" << endl;
    cout << "\t************ ****    ****  ***      *** ****         ************" << endl;
    cout << "\t************ ****    ****  ***      *** ****         ************" << endl;
    cout << "\t************ ****     **** ***      *** ****         ************" << endl;
    cout << "Presione enter para continuar." << endl;
    cin.get();
    system("cls");
    while (repetir == true) {
        opcion = Menu();
        switch (opcion) {
        case 1: {
            system("cls");
            cout << "Ingrese un apodo para el jugador sin espacios." << endl;
            cin >> historial1[espacio1].apodo;
            espacio1 += 1;
            system("cls");
            puntos=evaluar();
            historial2[espacio2].puntaje=puntos;
            espacio2+=1;
			cout <<"**************************************************"<< endl;
			cout <<"*****---Presione enter para volver al menu---*****" << endl;
			cout <<"**************************************************"<< endl;
            cin.get();
			if (cin.get()){
            system("cls");
			break;}
        }
        case 2: {
            system("cls");
            cout << "Los puntajes de los jugadores son:" << endl;
            for (int i = 0; i < espacio1; i++) {
                cout << i + 1 <<"   "<<historial1[i].apodo << "---------"<<historial2[i].puntaje<<" puntos."<<endl;
            }
            cout <<"**************************************************"<< endl;
			cout <<"*****---Presione enter para volver al menu---*****" << endl;
			cout <<"**************************************************"<< endl;
            cin.get();
			if (cin.get()){
            system("cls");
			break;}
        }
        case 3: {
            system("cls");
            cout << "\t\t\\\\\\\\\\\\Este juego fue creado por Nayeli Gualpa y Josue Quintana//////" << endl<<endl;
        	cout <<"**************************************************"<< endl;
			cout <<"*****---Presione enter para volver al menu---*****" << endl;
			cout <<"**************************************************"<< endl;
            cin.get();
			if (cin.get()){
            system("cls");
			break;}
        }
        case 4: {
        	system("cls");
        	cout<<"                       Instrucciones."<<endl<<endl;
        	cout<<"En el primer lanzamiento de los dados tienes dos posibilidades:"<<endl<<endl;
        	cout<<"      Ganar                                       Perder"<<endl;
        	cout<<"Debes sacar 7 u 11                         Si sacas 2,3 o 12"<<endl<<endl;
        	cout<<"Si no sacaste 2,3,7,11 o 12 tienes dos posibilidades en los proximos lanzamientos:"<<endl<<endl;
        	cout<<"            Ganar                                Perder"<<endl;
        	cout<<"Debes sacar el valor del primer tiro           Si sacas 7."<<endl<<endl;
        	cout<<"El puntaje si ganas en el primer tiro sera de 100 puntos."<<endl<<endl;
        	cout<<"Si no ganas en el primer tiro el puntaje sera el resultado de las veces que lances el dado para 100 puntos."<<endl<<endl;
        	cout <<"**************************************************"<< endl;
			cout <<"*****---Presione enter para volver al menu---*****" << endl;
			cout <<"**************************************************"<< endl;
            cin.get();
			if (cin.get()){
            system("cls");
			break;}
		}
        case 5: {
            system("cls");
            cout << "Gracias por jugar!! ADIOS." << endl;
            repetir = false;
            break;
        }
        default: {
            system("cls");
            cout << "La opcion ingresada no se encuentra en el menu" << endl<<endl;
            cout <<"**************************************************"<< endl;
			cout <<"*****---Presione enter para volver al menu---*****" << endl;
			cout <<"**************************************************"<< endl;
            cin.get();
			if (cin.get()){
            system("cls");
			break;}
        }
        }

    }
    return 0;
}

