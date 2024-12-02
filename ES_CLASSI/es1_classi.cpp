#include<iostream>
#include<fstream>
using namespace std;

const char[] pathFile ="./dati.csv";

class ContoCorrente {
	public:	
		string titolare;
		double saldo;
		int Ntransazioni;
		
		ContoCorrente() {
			ifstream file(pathFile);
			string siga;
			file>>riga;
			
		}
		
		void Ricarica(double soldi) {
			saldo += soldi;
			Ntransazioni++;
			cout<<" Saldo aggiornato: "<<saldo <<"\n";
		}
		
		bool prelievo(double soldi) {
			if(soldi > saldo) {
				cout<<" Saldo insufficente "<<"\n";
				return 0;
			}
			saldo -= soldi;
			cout<<soldi<<" euro erogati. Saldo aggiornato: "<<saldo<<"\n";
			Ntransazioni++;
			return 1;
		}
		
		void VisualizzaConto() {
			cout<<"Il Saldo attuale e' di: "<<saldo<<" euro"<<"\n";	
		}
		
		void Salva() {
			ofstream file(pathFile);
			file<<"Titolare,Saldo,NTransizioni";
			file<<'\n';
			file<<titolare;
			file<<',';
			file<<saldo;
			file<<',';
			file<<Ntransizioni;
			file<<'\n';
			file.close();
		}
};

int main() {
	int scelta;
	double cifra;
	ContoCorrente* conto = new ContoCorrente("Francesco Rossi",100000);
	
	do{
		cout<<"Menu: "<<"\n";
		cout<<"1)visualizare saldo"<<"\n";
		cout<<"2)effetuare prelievo"<<"\n";
		cout<<"3)effettuare ricarica"<<"\n";
		cout<<"4)exit"<<"\n";
		cin>>scelta;
		
		switch(scelta) {
			case 1:{
				conto->VisualizzaConto();
				break;
			}
			case 2:{
				cout<<"Che cifra vuoi prendere? ";
				cin>>cifra;
				conto->prelievo(cifra);
				break;
			}
			case 3:{
				cout<<"Che cifra vuoi depositare? ";
				cin>>cifra;
				conto->Ricarica(cifra);
				break;
			}
			case 4:{
				conto->Salva();
				delete conto;
				system("pause");
				return 0;
				break;
			}
			default :
				cout<<"Scelta non valida! Riprovare: ";
				cin>>scelta;
		}
	}while(scelta != 4);
	
	
	system("pause");
	return 0;
}
