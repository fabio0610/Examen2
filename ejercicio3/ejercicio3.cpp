#include <iostream>
#include "GrafoMatriz.h"
using namespace::std;
//GrafoMatriz *grafo =new GrafoMatriz();

int menu_B(){
    int b;
    cout << "Ejercicio 3 Grafo"<<endl;
    cout << "1. Ingresar nodos" << endl;
    cout << "2. Interconectar nodos" << endl;
    cout << "3. Costo total" << endl;
    cout << "4. Mostrar Matriz adyacencia" << endl;
    cout << "5. Salir" << endl;
    cin >> b;
    return b;
}

void menu1(){
    int id=0, id2=0;
    int opcion_seleccionada = 0;
    do{
        opcion_seleccionada = menu_B();
        switch(opcion_seleccionada)
        {
            case 1: //Ingresar nodos
                cout<<"Ingrese el ID del equipo ganador"<<endl;
                cin>>id;

                break;
            case 2:
                cout<<"Ingrese el primer ID "<<endl;
                cin>>id;
                cout<<"Ingrese el segundo ID "<<endl;
                cin>>id2;

                break;
            case 3:
                cout<<"Ingrese el ID del equipo que simule ser ganador"<<endl;
                cin>>id;

                break;
            case 4:

                break;
            case 5://salir
                break;
        }
    }while(opcion_seleccionada < 6);
}





int main(){
    menu1();
    return 0;
}

