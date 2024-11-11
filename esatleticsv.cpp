/*Crea un programma che gestisce i tempi degli atleti.
Di ogni atleta va salvato nome, cognome e specialità (100m, 200m, 100m ostacoli, marcia...) e il miglior tempo in quella specialità. Il tempo va salvato in ore, minuti e secondi. 
All'avvio caricare i dati da un file csv e al termine del programma salvare i dati su un file csv.
Permettere all'utente di:
- inserire un nuovo atleta
- rimuovere un atleta
- visualizzare tutti gli atleti in ordine alfabetico (per cognome).

Il programma può memorizzare massimo 20 atleti*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct TEMPO{
	int ore;
	int minuti;
	int secondi;
};

struct ATLETA{
	string nome;
	string cognome;
	string specialita;
	TEMPO migliorTempo;
};


int main() {
	
	int scelta;
	const int Max_alteti = 20;
	ATLETA array[Max_alteti];
	
	do{
		cout<<"____MENU'____"<<endl;
		cout<<"0)Exit "<<endl;
		cout<<"1)inserire un nuovo atleta "<<endl;
		cout<<"2)rimuovere un atleta "<<endl;
		cout<<"3)visualizzare tutti gli atleti in ordine alfabetico (per cognome) "<<endl;
		cin>>scelta;
		switch(scelta){
			case 1: {
				
				break;
			}
			case 2: {
				
				break;
			}
			case 3: {
				
				break;
			}
			
			default : cout<<"Inserisci un numero valido!!!!! "<<endl;
					  cin>>scelta;
		}
	}while(scelta!=0);
	
	
	system("pause");
	return 0;
}
