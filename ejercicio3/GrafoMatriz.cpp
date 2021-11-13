//
// Created by Fabio Villalobos on 13/11/2021.
//

#include "GrafoMatriz.h"

GrafoMatriz::GrafoMatriz(int mx)
{
    maxVerts = mx;
    verts = new Vertice[mx] ; // vector de vértices
    matAd = new pint[mx]; // vector de punteros
    numVerts = 0;
    for (int i = 0; i < mx; i++)
        matAd[i] = new int [mx]; // matriz de adyacencia
}

GrafoMatriz::GrafoMatriz()
{
    maxVerts = 1 ;
    GrafoMatriz(maxVerts);
}

int GrafoMatriz::OnumeroDeVertices(){return numVerts;}
void GrafoMatriz::PnumeroDeVertices(int n){numVerts = n;}

void GrafoMatriz::nuevoVertice (string nom)
{
    bool esta = numVertice(nom) >= 0;
    if (!esta)
    {
        Vertice v = Vertice(nom, numVerts);
        verts[numVerts++] = v; // se asigna a la lista.
        // No se comprueba que sobrepase el máximo
    }
}

int GrafoMatriz::numVertice(string v)
{
    int i;
    bool encontrado = false;
    for ( i = 0; (i < numVerts) && !encontrado;)

    {
        encontrado = verts[i].igual(v);
        if (!encontrado) i++ ;
    }
    return (i < numVerts) ? i : -1 ;
}

void GrafoMatriz::nuevoArco(string a, string b)
{
    int va, vb;
    va = numVertice(a);
    vb = numVertice(b);
    if (va < 0 || vb < 0) throw "Vértice no existe";
    matAd[va][vb] = 1;
}

bool GrafoMatriz::adyacente(string a, string b)
{
    int va, vb;
    va = numVertice(a);
    vb = numVertice(b);
    if (va < 0 || vb < 0) throw "Vértice no existe";
    return matAd[va][vb] == 1;
}

int GrafoMatriz::Ovalor(string a, string b)
{
    int va, vb;
    va = numVertice(a);
    vb = numVertice(b);
    if (va < 0 || vb < 0) throw "Vértice no existe" ;
    return matAd[va][vb];
}

Vertice GrafoMatriz::Overtice(int va)
{
    if (va < 0 || va >= numVerts)
        throw "Vértice no existe";
    else return verts[va];
}

void GrafoMatriz::Pvertice( int va, Vertice vert)
{
    if (va < 0 || va >= numVerts)
        throw "Vértice no existe";
    else verts[va] = vert;
}

void GrafoMatriz::Pvalor( char *a, char *b, int v)
{
    int va, vb;
    va = numVertice(a);
    vb = numVertice(b);
    if (va < 0 || vb < 0) throw "Vértice no existe";
    matAd[va][vb] = v;
}