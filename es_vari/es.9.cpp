//Scrivere un programma in Linguaggio C++ in cui l'utente inserisce un numero e viene determinato se questo è pari o dispari
#include<iostream>
using namespace std;
int main() {
	
	int numero;
	
	cout<<"Inserisci il numero: "<<endl;
	cin>>numero;
	
	if(numero%2==0){
		cout<<"Il numero e' positivo ";
	}
	else cout<<"Il numero e' dispari ";
	

	
	
	system("pause");
	return 0;
}
