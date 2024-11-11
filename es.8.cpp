#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double a, b, c; 
    cout << "Inserisci il valore di a: ";
    cin >> a;
    cout << "Inserisci il valore di b: ";
    cin >> b;
    cout << "Inserisci il valore di c: ";
    cin >> c;

    
    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
       
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Le radici dell'equazione sono:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    } else if (discriminante == 0) {
       
        double x = -b / (2 * a);
        cout << "L'equazione ha una radice reale doppia:\n";
        cout << "x = " << x << "\n";
    } else {
       
        cout << "L'equazione non ha radici reali.\n";
    }

    return 0;
}

