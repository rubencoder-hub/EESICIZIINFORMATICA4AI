/*Il prezzo del biglietto di un cinema � determinato dall'et� degli spettatori: per i bambini al di sotto dei 10 anni e gli anziani con pi� di 80 anni, l'ingresso � omaggio.
Scrivere un programma in linguaggio C++  che in base all'et� inserita, indica se lo spettatore ha diritto o meno all'ingresso gratuito.*/
#include <iostream> 
using namespace std; 

 bool ingressoGratuito(int eta) { 
 return (eta < 10 || eta > 80);
  }
   int main() { 
   int eta;
    
	cout << "Inserisci la tua et�: ";
	 cin >> eta;
	 
	  if (ingressoGratuito(eta)) {
	   cout << "Hai diritto all'ingresso gratuito!" << endl; 
	   }
	    else { 
		cout << "Devi pagare per il biglietto!" << endl;
		 } 
		 return 0; }
