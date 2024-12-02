#include <iostream>
using namespace std;
class Televisione {
private:
    int canale;
    int volume;
    bool acceso;
    bool silenzioso;

public:
    
    Televisione() : canale(1), volume(10), acceso(false), silenzioso(false) {}

   
    void accendi() {
        acceso = true;
        cout << "TV accesa." << endl;
    }

    
    void spegni() {
        acceso = false;
        cout << "TV spenta." << endl;
    }

   
    void cambiaCanale(int nuovoCanale) {
        if (acceso) {
            canale = nuovoCanale;
            cout << "Canale cambiato a: " << canale << endl;
        } else {
            cout << "Accendere la TV per cambiare canale." << endl;
        }
    }

    
    void aumentaCanale() {
        if (acceso) {
            canale++;
            cout << "Canale aumentato a: " << canale << endl;
        } else {
            cout << "Accendere la TV per aumentare il canale." << endl;
        }
    }

    
    void diminuisciCanale() {
        if (acceso && canale > 1) {
            canale--;
            cout << "Canale diminuito a: " << canale << endl;
        } else {
            cout << "Accendere la TV per diminuire il canale o sei già sul canale 1." << endl;
        }
    }

    
    void aumentaVolume() {
        if (acceso && !silenzioso) {
            volume++;
            cout << "Volume aumentato a: " << volume << endl;
        } else {
            cout << "Accendere la TV e disattivare il silenzioso per aumentare il volume." << endl;
        }
    }

    
    void riduciVolume() {
        if (acceso && volume > 0 && !silenzioso) {
            volume--;
            cout << "Volume ridotto a: " << volume << endl;
        } else {
            cout << "Accendere la TV e disattivare il silenzioso per ridurre il volume." << endl;
        }
    }

    
    void impostaSilenzioso() {
        if (acceso) {
            silenzioso = true;
            cout << "TV impostata in modalità silenziosa." << endl;
        } else {
            cout << "Accendere la TV per impostare la modalità silenziosa." << endl;
        }
    }

    
    void rimuoviSilenzioso() {
        if (acceso) {
            silenzioso = false;
            cout << "Modalità silenziosa disattivata." << endl;
        } else {
            cout << "Accendere la TV per disattivare la modalità silenziosa." << endl;
        }
    }

    
    void mostraStato() {
        cout << "Stato TV: " << (acceso ? "Accesa" : "Spenta") << endl;
        if (acceso) {
            cout << "Canale attuale: " << canale << endl;
            cout << "Volume attuale: " << (silenzioso ? "Silenzioso" : to_string(volume)) << endl;
        }
    }
};

int main() {
    Televisione tv;

    tv.accendi();
    tv.cambiaCanale(5);
    tv.aumentaVolume();
    tv.aumentaVolume();
    tv.impostaSilenzioso();
    tv.rimuoviSilenzioso();
    tv.diminuisciCanale();
    tv.mostraStato();
    tv.spegni();

    return 0;
}
