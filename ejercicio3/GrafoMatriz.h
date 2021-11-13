#include "Vertice.h"

#ifndef PROGRAMA1_CPP_GRAFOMATRIZ_H
#define PROGRAMA1_CPP_GRAFOMATRIZ_H


class GrafoMatriz
{
protected:
    int maxVerts; // máximo numero de vértices
    int numVerts; // número de vértices actual
    Vertice * verts; // array de vértices
    int ** matAd; // matriz de adyacencia
public:
    typedef int * pint; // para el dimensionamiento de la matriz
    GrafoMatriz(int mx);
    GrafoMatriz();

    int OnumeroDeVertices();
    void PnumeroDeVertices(int n);
    void nuevoVertice (string nom);
    int numVertice(string v);
    void nuevoArco(string a, string b);
    bool adyacente(string a, string b);
    int Ovalor(string a, string b);
    Vertice Overtice(int va);
    void Pvertice( int va, Vertice vert);
    void Pvalor( char *a, char *b, int v);
};


#endif //PROGRAMA1_CPP_GRAFOMATRIZ_H
