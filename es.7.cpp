/*Scrivere un programma in Linguaggio C++ in cui l'utente inserisce il numero dei lati di un poligono e scrive il nome per quelli compresi tra tre e sei.*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    int lati;
    string nomePoligono;


    cout << "Inserisci il numero di lati del poligono (3-6): ";
    cin >> lati;


    switch (lati) {
        case 3:
            nomePoligono = "Triangolo";
            break;
        case 4:
            nomePoligono = "Quadrato o Rettangolo (a seconda dei lati)";
            break;
        case 5:
            nomePoligono = "Pentagono";
            break;
        case 6:
            nomePoligono = "Esagono";
            break;
        default:
            nomePoligono = "Numero di lati non valido. Inserisci un numero tra 3 e 6.";
            break;
    }

    
    cout << nomePoligono << endl;

    return 0;
}

