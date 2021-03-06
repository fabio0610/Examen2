

#include "Vertice.h"

Vertice::Vertice() {}

Vertice::Vertice(string x)
{ // inicializa el nombre y pone el número de vértice e -1
nombre = x;
numVertice = -1;
costo=1;
}

Vertice::Vertice(string x, int n, int costo)
{ // inicializa el nombre y el número de vértice
nombre = x;
numVertice = n;
costo=costo;
}

string Vertice::OnomVertice()
{ // retorna el nombre del vértice
    return nombre;
}

void Vertice::PnomVertice(string nom)
{ // cambia el nombre del vértice
    nombre = nom;
}

bool Vertice::igual(Vertice n)
{ // decide entre la igualdad de nombres
    return nombre == n.nombre;
}

void Vertice::PnumVertice(int n)
{ // cambia el número del vértice
    numVertice = n;
}

int Vertice::OnumVertice()
{ // retorna el número del vértice
    return numVertice;
}

const string &Vertice::getNombre() const {
    return nombre;
}

void Vertice::setNombre(const string &nombre) {
    Vertice::nombre = nombre;
}

int Vertice::getNumVertice() const {
    return numVertice;
}

void Vertice::setNumVertice(int numVertice) {
    Vertice::numVertice = numVertice;
}

int Vertice::getCosto() const {
    return costo;
}

void Vertice::setCosto(int costo) {
    Vertice::costo = costo;
}

