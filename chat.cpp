#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Classe per l'Automobile
class Automobile {
public:
    string marca;
    string modello;
    int kw;
    int annoCostruzione;
    string targa;

    Automobile(string m, string mo, int kw, int anno, string t) 
        : marca(m), modello(mo), kw(kw), annoCostruzione(anno), targa(t) {}

    void stampa() const {
        cout << "Marca: " << marca << ", Modello: " << modello 
             << ", Kw: " << kw << ", Anno di costruzione: " << annoCostruzione
             << ", Targa: " << targa << endl;
    }
};

// Classe per il Cliente
class Cliente {
public:
    string nome;
    string cognome;
    string dataAcquisto;
    vector<Automobile> automobiliAcquistate;

    Cliente(string n, string c, string da) : nome(n), cognome(c), dataAcquisto(da) {}

    void stampa() const {
        cout << "Nome: " << nome << ", Cognome: " << cognome 
             << ", Data di acquisto: " << dataAcquisto << endl;
        if (automobiliAcquistate.empty()) {
            cout << "Nessuna automobile acquistata." << endl;
        } else {
            for (const auto& auto_acquistata : automobiliAcquistate) {
                auto_acquistata.stampa();
            }
        }
    }

    void aggiungiAutomobile(const Automobile& auto_acquistata) {
        automobiliAcquistate.push_back(auto_acquistata);
    }
};

// Classe per il Database
class Database {
private:
    vector<Automobile> automobili;
    vector<Cliente> clienti;

public:
    void inserisciAutomobile(const Automobile& auto_inserita) {
        automobili.push_back(auto_inserita);
    }

    void inserisciCliente(const Cliente& cliente_inserito) {
        clienti.push_back(cliente_inserito);
    }

    Cliente* cercaClientePerNome(string nome, string cognome) {
        for (auto& cliente : clienti) {
            if (cliente.nome == nome && cliente.cognome == cognome) {
                return &cliente;
            }
        }
        return nullptr;
    }

    void modificaAutomobile(string targa, const Automobile& nuova_auto) {
        for (auto& auto_db : automobili) {
            if (auto_db.targa == targa) {
                auto_db = nuova_auto;
                return;
            }
        }
        cout << "Automobile con targa " << targa << " non trovata!" << endl;
    }

    void modificaCliente(string codice_fiscale, const Cliente& nuovo_cliente) {
        for (auto& cliente_db : clienti) {
            if (cliente_db.cognome == codice_fiscale) { // Assumiamo il codice fiscale come il cognome
                cliente_db = nuovo_cliente;
                return;
            }
        }
        cout << "Cliente con codice fiscale " << codice_fiscale << " non trovato!" << endl;
    }

    void eliminaAutomobile(string targa) {
        auto it = remove_if(automobili.begin(), automobili.end(), [&](const Automobile& auto_db) {
            return auto_db.targa == targa;
        });
        if (it != automobili.end()) {
            automobili.erase(it, automobili.end());
            cout << "Automobile con targa " << targa << " eliminata." << endl;
        } else {
            cout << "Automobile con targa " << targa << " non trovata!" << endl;
        }
    }

    void eliminaCliente(string codice_fiscale) {
        auto it = remove_if(clienti.begin(), clienti.end(), [&](const Cliente& cliente_db) {
            return cliente_db.cognome == codice_fiscale; // Usando il cognome come identificativo
        });
        if (it != clienti.end()) {
            clienti.erase(it, clienti.end());
            cout << "Cliente con codice fiscale " << codice_fiscale << " eliminato." << endl;
        } else {
            cout << "Cliente con codice fiscale " << codice_fiscale << " non trovato!" << endl;
        }
    }

    vector<Cliente*> cercaClientiPerModelloAuto(string modello) {
        vector<Cliente*> risultati;
        for (auto& cliente : clienti) {
            for (auto& auto_acquistata : cliente.automobiliAcquistate) {
                if (auto_acquistata.modello == modello) {
                    risultati.push_back(&cliente);
                    break;
                }
            }
        }
        return risultati;
    }

    void stampaCliente(const Cliente& cliente) const {
        cliente.stampa();
    }

    void stampaAutomobile(const Automobile& auto_inserita) const {
        auto_inserita.stampa();
    }
};

// Funzione per il menu
void mostraMenu() {
    cout << "\n--- Menu ---" << endl;
    cout << "1. Inserisci automobile nel DB" << endl;
    cout << "2. Inserisci cliente nel DB" << endl;
    cout << "3. Cerca automobile acquistata da un cliente" << endl;
    cout << "4. Modifica automobile nel DB" << endl;
    cout << "5. Modifica cliente nel DB" << endl;
    cout << "6. Elimina automobile nel DB" << endl;
    cout << "7. Elimina cliente nel DB" << endl;
    cout << "8. Cerca clienti per modello di automobile" << endl;
    cout << "9. Stampa cliente" << endl;
    cout << "10. Stampa automobile" << endl;
    cout << "0. Esci" << endl;
}

int main() {
    Database db;
    int scelta;

    while (true) {
        mostraMenu();
        cout << "Scegli un'opzione: ";
        cin >> scelta;

        switch (scelta) {
            case 1: {
                string marca, modello, targa;
                int kw, anno;
                cout << "Inserisci marca: ";
                cin >> marca;
                cout << "Inserisci modello: ";
                cin >> modello;
                cout << "Inserisci kw: ";
                cin >> kw;
                cout << "Inserisci anno di costruzione: ";
                cin >> anno;
                cout << "Inserisci targa: ";
                cin >> targa;
                db.inserisciAutomobile(Automobile(marca, modello, kw, anno, targa));
                break;
            }

            case 2: {
                string nome, cognome, dataAcquisto;
                cout << "Inserisci nome cliente: ";
                cin >> nome;
                cout << "Inserisci cognome cliente: ";
                cin >> cognome;
                cout << "Inserisci data di acquisto: ";
                cin >> dataAcquisto;
                db.inserisciCliente(Cliente(nome, cognome, dataAcquisto));
                break;
            }

            case 3: {
                string nome, cognome;
                cout << "Inserisci nome cliente: ";
                cin >> nome;
                cout << "Inserisci cognome cliente: ";
                cin >> cognome;
                Cliente* cliente = db.cercaClientePerNome(nome, cognome);
                if (cliente) {
                    cliente->stampa();
                } else {
                    cout << "Cliente non trovato!" << endl;
                }
                break;
            }

            case 4: {
                string targa, marca, modello;
                int kw, anno;
                cout << "Inserisci targa automobile da modificare: ";
                cin >> targa;
                cout << "Inserisci nuova marca: ";
                cin >> marca;
                cout << "Inserisci nuovo modello: ";
                cin >> modello;
                cout << "Inserisci nuovi kw: ";
                cin >> kw;
                cout << "Inserisci nuovo anno di costruzione: ";
                cin >> anno;
                db.modificaAutomobile(targa, Automobile(marca, modello, kw, anno, targa));
                break;
            }

            case 5: {
                string codice_fiscale, nome, cognome;
                cout << "Inserisci codice fiscale cliente da modificare: ";
                cin >> codice_fiscale;
                cout << "Inserisci nuovo nome: ";
                cin >> nome;
                cout << "Inserisci nuovo cognome: ";
                cin >> cognome;
                db.modificaCliente(codice_fiscale, Cliente(nome, cognome, codice_fiscale));
                break;
            }

            case 6: {
                string targa;
                cout << "Inserisci targa automobile da eliminare: ";
                cin >> targa;
                db.eliminaAutomobile(targa);
                break;
            }

            case 7: {
                string codice_fiscale;
                cout << "Inserisci codice fiscale cliente da eliminare: ";
                cin >> codice_fiscale;
                db.eliminaCliente(codice_fiscale);
                break;
            }

            case 8: {
                string modello;
                cout << "Inserisci modello di automobile: ";
                cin >> modello;
                vector<Cliente*> clienti_modello = db.cercaClientiPerModelloAuto(modello);
                for (auto& cliente : clienti_modello) {
                    cliente->stampa();
                }
                break;
            }

            case 9: {
                string nome, cognome;
                cout << "Inserisci nome cliente: ";
                cin >> nome;
                cout << "Inserisci cognome cliente: ";
                cin >> cognome;
                Cliente* cliente = db.cercaClientePerNome(nome, cognome);
                if (cliente) {
                    db.stampaCliente(*cliente);
                } else {
                    cout << "Cliente non trovato!" << endl;
                }
                break;
            }

            case 10: {
                string targa;
                cout << "Inserisci targa automobile: ";
                cin >> targa;
                auto it = find_if(db.automobili.begin(), db.automobili.end(), [&](const Automobile& auto_db) {
                    return auto_db.targa == targa;
                });
                if (it != db.automobili.end()) {
                    db.stampaAutomobile(*it);
                } else {
                    cout << "Automobile non trovata!" << endl;
                }
                break;
            }

            case 0:
                cout << "Uscita dal programma." << endl;
                return 0;

            default:
                cout << "Opzione non valida!" << endl;
        }
    }

    return 0;
}

