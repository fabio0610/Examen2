#include <iostream>

using namespace::std;
#ifndef PROGRAMA1_CPP_VERTICE_H
#define PROGRAMA1_CPP_VERTICE_H


class Vertice
{
protected:
    string nombre;
    int numVertice;
    int costo;

public:
    Vertice();
    Vertice(string x);
    Vertice(string x, int n, int costo);

    string OnomVertice();
    void PnomVertice(string nom);
    bool igual(Vertice n);
    void PnumVertice(int n);
    int OnumVertice();

    const string &getNombre() const;

    void setNombre(const string &nombre);

    int getNumVertice() const;

    void setNumVertice(int numVertice);

    int getCosto() const;

    void setCosto(int costo);

};


#endif //PROGRAMA1_CPP_VERTICE_H
