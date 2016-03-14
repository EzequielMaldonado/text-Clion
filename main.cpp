#include <iostream>

using namespace std;

int potencia(int base, int exponente)
{
    if(exponente == 0) return 1;
    if (exponente == 1) return base;
    else{
        return base*potencia(base, exponente-1);
    }


}

int main() {

        int base, exponente;
    cout <<"ingrese la base:"<< endl;
    cin >> base;
    cout <<"ingrese el exponente: "<< endl;
    cin >> exponente;
    cout << "El resultado es: " << potencia(base, exponente) << endl ;
    return 0;
}

