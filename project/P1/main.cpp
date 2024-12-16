#include <iostream>
using namespace std;
/* Consegna:
	Realizzare un programma  OOP C++ che gestisce un semplice database di automobili.
	Le operazione possibili sono:
		1.Inserimento di un automobile nel db
		2.Inserimento di un nuovo cliente nel db
		3.ricerca dell'auto acquistata da un cliente a partire dal cognome e nome
		4.modifica automobile nel db
		5.modifica del cliente nel db
		6.eliminazione automobile nel db
		7.eliminazione cliente nel db
		8.ricerca clienti che hanno acquistato un certo modello di auto
	    9.stampa di un cliente
	    10.stampa di un auto
		
		Caratteristiche Auto:
			marca,modello,kw,annoCostrucione
			
		Caratteristica Cliente:
			cognome,nome,dataAcquisto

Appunti:

sizeof(arr) = numero di byte

 */

class Persona{
	
	private:
		string cognome;
		string nome;
		string dataAcquisto;
		
	public:
		
		Persona(string cognome,string nome,string dataAcquisto){
			this->cognome=cognome;
			this->nome=nome;
			this->dataAcquisto=dataAcquisto;
		}
		
		Inserisci persona(){
			
		}
		
};

class Automobile{
	
	private:
		string marca;
		string modello;
		double kw;
		int annoCostruzione;
		
	public:
		
		void InserisciAutomobile(string marca,string modello,double kw,int annoCostruzione){
			this->marca=marca;
			this->modello=modello;
			this->kw=kw;
			this->annoCostruzione=annoCostruzione;
		}
};

class DataBase{
	
	private:
		Persona persona;
		Automobile automobile;
		
	public:
		DataBase(Persona persona,Automobile automobile){
			this->persona=persona;
			this->automobile=automobile;
		}
};

int main(int argc, char** argv) {
	
	int scelta;
	int ContatoreAuto;
	
	vector<DataBase>Database;
	
    do{
    	
    cout<<" MENU: "<<"\n";
	cout<<"INSERIRE IL NUMERO DELL' OPZIONE DESIDERATA: "<<"\n";
	cout<<"1.Inserimento di un automobile nel db"<<"\n";
	cout<<"	2.Inserimento di un nuovo cliente nel db"<<"\n";
	cout<<"	3.ricerca dell'auto acquistata da un cliente a partire dal cognome e nome"<<"\n";
	cout<<"	4.modifica automobile nel db"<<"\n";
	cout<<"	5.modifica del cliente nel db"<<"\n";
	cout<<"	6.eliminazione automobile nel db"<<"\n";
	cout<<"	7.eliminazione cliente nel db"<<"\n";
	cout<<"8.ricerca clienti che hanno acquistato un certo modello di auto"<<"\n";
	cout<<"9.stampa di un cliente"<<"\n";
	cout<<"10.stampa di un auto"<<"\n";
	
	}while(scelta!=0);
	
	system("pause");
	return 0;
}
