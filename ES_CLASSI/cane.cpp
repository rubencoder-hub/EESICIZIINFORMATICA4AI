#include<iostream>
using namespace std;

class Cane{
	
	private:
		string nome;
		int eta;
		double peso;
	
	public:
		
	Cane(string n,int e,double p){
		nome=n;
		eta=e;
		peso=p;
	}	
	
	void abbaia(){
		cout<<"Bau bau bau pow paw"<<endl;
	}
	void magia(){
		pesoAggiunto=(peso*0.2/100);
		peso+=pesoAggiunto;
	}
	void dormi(){
		cout<<"ZZzzzzz! "<<endl;
	}
	
};



int main() {
	
	string nome;
	int eta;
	double peso;
	
	cout<<"Inserire il nome: "<<endl;
	cin>>nome;
	cout<<"inseire l'eta: "<<endl;
	cin>>eta;
	cout<<"Inserire il peso: "<<endl;
	cin>>peso;
	
	Cane* cane=new Cane(nome,eta,peso);
	
	cane->dormi();
	cane->abbaia();
	cane->mangia();

	cout << "Il peso ora e' di: " << cane->getPeso() <<endl;

	
	return 0;
}
