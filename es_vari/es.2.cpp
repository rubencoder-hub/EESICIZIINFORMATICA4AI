#include<iostream>
using namespace std;
int main() {
	
	int numero;
	int contaN=0;
	int somma=0;
	
	for(int i=0;i<10;i++){
		cout<<"Inserire un numero positivo: ";
		cin>>numero;
		
		while(numero<0){
			cout<<"Il numero non e' posito !!!! ";
			cout<<"Rinserire il numero positivo: ";
			cin>>numero;
			contaN++;
		}
		somma+=numero;
	}
	
	cout<<"Il numero di numeri negativi inseriti e': "<<contaN<<endl;
	cout<<"La somma dei numeri positie': "<<somma<<endl;
	
	system("pause");
	return 0;
}
