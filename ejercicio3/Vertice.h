#include <iostream>

using namespace::std;
#ifndef PROGRAMA1_CPP_VERTICE_H
#define PROGRAMA1_CPP_VERTICE_H


class Vertice
{
protected:
    string nombre;
    int numVertice;

public:
    Vertice();
    Vertice(string x);
    Vertice(string x, int n);

    string OnomVertice();
    void PnomVertice(string nom);
    bool igual(Vertice n);
    void PnumVertice(int n);
    int OnumVertice();

};


#endif //PROGRAMA1_CPP_VERTICE_H
