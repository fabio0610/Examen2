#include <iostream>
#include <fstream>

using namespace std;

int digito_hexadecimal[100];
int decimal, residuo, base, resultado, i = 0;
void convertir(int numero, int digito);

void convertir(int numero, int digito){
    int decimal = numero;
    int base = digito;
    do
    {
        resultado = decimal / base;
        residuo = decimal % base;
        digito_hexadecimal[i] = residuo;
        decimal = resultado;
        i++;
    } while (resultado > (base-1));

    digito_hexadecimal[i] = resultado;

    cout << "La conversion en la base ingresada es: ";

    for (int j = i; j >= 0; j--)
    {
        if (digito_hexadecimal[j] == 10)
        {
            cout << "A";
        }
        else if (digito_hexadecimal[j] == 11)
        {
            cout << "B";
        }
        else if (digito_hexadecimal[j] == 12)
        {
            cout << "C";
        }
        else if (digito_hexadecimal[j] == 13)
        {
            cout << "D";
        }
        else if (digito_hexadecimal[j] == 14)
        {
            cout << "E";
        }
        else if (digito_hexadecimal[j] == 15)
        {
            cout << "F";
        }
        else
        {
            cout << digito_hexadecimal[j];
        }   
    }
    cout << endl;


}

int main()
{

    cout<<"*************************************************"<<endl;
    cout<<"              Convertidor de decimal "<<endl;

    cout<<"\nIngrese la base que desea mayor a 10: "<<endl;
    cin >> base;

    cout << "\nIngrese el numero decimal: " << endl;
    cin >> decimal;

    convertir(decimal, base);
}