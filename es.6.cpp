/*Scrivere un programma in Linguaggio C++ in cui l'utente inserisce il valore di un numero compreso tra 0 e 2  che corrispondono agli stati di un semaforo e visualizza una parola che lo traduce nel colore corrispondente.

P.S. gli stati possibili di un semaforo sono tre e a ciascuno di essi associamo un colore come per esempio:
0 <- VERDE
1 <- ARANCIO
2 <- ROSSO
*/
#include<iostream>
using namespace std;
int main() {
	
	int valore;
	
	cout<<"Inserisci un valore compreso tra 0 e 2: ";
	cin>>valore;
	
	switch(valore){
		
		case 0:{
			cout<<" verde ";
			break;
		}
		
		case 1:{
			cout<<" arancio ";
			break;
		}
		
		case 2:{
			cout<<" rosso ";
			break;
		}	
		
		default: cout<<"Rinscerisci il numero! ";
		cin>>valore;
		
	}
	
	
	system("pause");
	return 0;
}
