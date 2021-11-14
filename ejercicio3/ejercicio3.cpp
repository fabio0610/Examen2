#include <iostream>
#include "GrafoMatriz.h"
using namespace::std;
GrafoMatriz *grafo= new GrafoMatriz(10);
int costo(string nombre1, string nombre2){
    int costo;
    if(grafo->Overtice(grafo->numVertice(nombre1)).getNombre()!=grafo->Overtice(grafo->numVertice(nombre2)).getNombre()) {
        costo = grafo->Overtice(grafo->numVertice(nombre1)).getCosto() + grafo->Overtice(grafo->numVertice(nombre2)).getCosto();
        return costo;
    }else{
        cout<<"El costo es igual"<<endl;
    }
    return costo;
}

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
    string nombre1, nombre2;
    int opcion_seleccionada = 0;

    do{
        opcion_seleccionada = menu_B();
        switch(opcion_seleccionada)
        {
            case 1: //Ingresar nodos
                cout<<"Ingrese nuevo nodo"<<endl;
                cin>>nombre1;
                grafo->nuevoVertice(nombre1);
                break;
            case 2:
                cout <<"Crear nuevo arco"<<endl;
                cout <<"Ingrese el nodo inicial"<<endl;
                cin >> nombre1;
                cout <<"Ingrese el nodo final"<<endl;
                cin >> nombre2;
                grafo->nuevoArco(nombre1, nombre2);
                break;
            case 3:
                cout<<"Costo"<<endl;
                cout <<"Ingrese el nombre del primer nodo:"<<endl;
                cin>>nombre1;
                cout <<"Ingrese el nombre del segundo nodo:"<<endl;
                cin>>nombre2;
                cout<<"El costo es:"<<endl;
                cout << costo(nombre1,nombre2)<<endl;
                break;
            case 4:
                cout<<"La matriz de adyacencia es:"<<endl;
                grafo->imprimir();
                break;
            case 5://salir
                break;
        }
    }while(opcion_seleccionada < 5);
}





int main(){
    menu1();
    return 0;
}

