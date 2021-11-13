#include <iostream>

using namespace::std;
class Vertice
{
protected:
    string nombre;
    int numVertice;

public:
    Vertice () {}
    Vertice(string x)
    { // inicializa el nombre y pone el número de vértice e -1
        nombre = x;
        numVertice = -1;
    }
    Vertice(string x, int n)
    { // inicializa el nombre y el número de vértice
        nombre = x;
        numVertice = n;
    }
    string OnomVertice()
    { // retorna el nombre del vértice
        return nombre;
    }
    void PnomVertice(string nom)
    { // cambia el nombre del vértice
        nombre = nom;
    }
    bool igual(Vertice n)
    { // decide entre la igualdad de nombres
        return nombre == n.nombre;
    }
    void PnumVertice(int n)
    { // cambia el número del vértice
        numVertice = n;
    }
    int OnumVertice()
    { // retorna el número del vértice
        return numVertice;
    }
};

class GrafoMatriz
{
protected:
    int maxVerts; // máximo numero de vértices
    int numVerts; // número de vértices actual
    Vertice * verts; // array de vértices
    int ** matAd; // matriz de adyacencia
public:
    typedef int * pint; // para el dimensionamiento de la matriz
    GrafoMatriz(int mx)
    {
        maxVerts = mx;
        verts = new Vertice[mx] ; // vector de vértices
        matAd = new pint[mx]; // vector de punteros
        numVerts = 0;
        for (int i = 0; i < mx; i++)
            matAd[i] = new int [mx]; // matriz de adyacencia
    }

    GrafoMatriz()
    {
        maxVerts = 1 ;
        GrafoMatriz(maxVerts);
    }

    int OnumeroDeVertices(){return numVerts;}
    void PnumeroDeVertices(int n){numVerts = n;}

    void nuevoVertice (string nom)
    {
        bool esta = numVertice(nom) >= 0;
        if (!esta)
        {
            Vertice v = Vertice(nom, numVerts);
            verts[numVerts++] = v; // se asigna a la lista.
            // No se comprueba que sobrepase el máximo
        }
    }

    int numVertice(string v)
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

    void nuevoArco(string a, string b)
    {
        int va, vb;
        va = numVertice(a);
        vb = numVertice(b);
        if (va < 0 || vb < 0) throw "Vértice no existe";
        matAd[va][vb] = 1;
    }

    bool adyacente(string a, string b)
    {
        int va, vb;
        va = numVertice(a);
        vb = numVertice(b);
        if (va < 0 || vb < 0) throw "Vértice no existe";
        return matAd[va][vb] == 1;
    }

    int Ovalor(string a, string b)
    {
        int va, vb;
        va = numVertice(a);
        vb = numVertice(b);
        if (va < 0 || vb < 0) throw "Vértice no existe" ;
        return matAd[va][vb];
    }

    Vertice Overtice(int va)
    {
        if (va < 0 || va >= numVerts)
            throw "Vértice no existe";
        else return verts[va];
    }

    void Pvertice( int va, Vertice vert)
    {
        if (va < 0 || va >= numVerts)
            throw "Vértice no existe";
        else verts[va] = vert;
    }

    void Pvalor( char *a, char *b, int v)
    {
        int va, vb;
        va = numVertice(a);
        vb = numVertice(b);
        if (va < 0 || vb < 0) throw "Vértice no existe";
        matAd[va][vb] = v;
    }
};


