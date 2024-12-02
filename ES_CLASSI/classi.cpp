#include<iostream>
using namespace std;
int main() {
	
	class Persona { 
		private:
			
		public:
			string nome;
			int eta;
			string cognome;
		
		void Saluta() {	cout<<"Ciao, sono "<<nome<<" "<<cognome<<" e ho "<<eta<<" anni "; }		
		
		Persona(string n,string c,int e) {
			nome = n;
			cognome = c;
			eta = e;
		}
		//mettere la tilde  ~ combo = alt + 126 nel tasterino numerico
		~Persona() {
			cout<<"Oggeto Distrutto"<<"\n";
		}
	};
	
	Persona* studente1 = new Persona("Maria","Chita",18);
	Persona* studente2 = new Persona("Federica","Certo",16);
	Persona* studente3 = new Persona("Lorenzo","Rossi",15);
	Persona* studente4 = new Persona("Filippo","Turz",21);
	Persona* studente5 = new Persona("Antonio","Paquaetto",34);
	
	studente1->Saluta();
	cout<<"\n";
	studente2->Saluta();
	cout<<"\n";	
	studente3->Saluta();
	cout<<"\n";
	studente4->Saluta();
	cout<<"\n";
	studente5->Saluta();
	cout<<"\n";
	
	delete studente1;
	delete studente2;
	delete studente3;
	delete studente4;
	delete studente5;
	
	system("pause");
	return 0;
}
