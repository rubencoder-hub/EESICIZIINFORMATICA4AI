/*Creare un programma che gestisca un archivio di 10 canzoni.
Per ogni canzone memorizzare nome, artista e duranta (in secondi).
il programma deve permettere di
- inserire una nuova canzone
- visualizzare tutte le canzoni inserite
- visualizzare tutte le canzoni in ordine crescente di durata

le canzoni devono essere salvate in file.
(suggerimento: fare un file per i nomi, uno per gli artisti e uno per la durata)*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct CANZONI{
	string nomedellacanzone;
	string artista;
	int durata;
};

const int Maxcanzoni = 10;

int main() {
	
	CANZONI array[Maxcanzoni] = {} ;
	int posizione = 0;
	int scelta;
	
	do{
		cout<<" MENU "<<"\n";
		cout<<"1) inserire una nuova canzone: "<<endl;
		cout<<"2) visualizzare tutte le canzoni inserite: "<<endl;
		cout<<"3) visualizzare tutte le canzoni in ordine crescente di durata: "<<endl;
		cout<<"0) exit ";
		cin>>scelta;
		
		switch(scelta){
		
		case 1:{
				cout<<"Inserisci nome della Canzone: "<<endl;
				cin>>array[posizione].nomedellacanzone;
				cout<<"Inserisci nome dell' artista: "<<endl;
				cin>>array[posizione].artista;
				cout<<"Inserisci la durata della canzone in secondi: "<<endl;
				cin>>array[posizione].durata;
				posizione++;
			break;
		}
		
		case 2:{
			if(posizione==0) {
				cout<<" Non ci sono canzoni !";	
			}
			else{
				for(int i=0;i<posizione;i++){
				cout<<" NOME: "<<array[i].nomedellacanzone<<endl;
				cout<<" NOME ARTISTA: "<<array[i].artista<<endl;
				cout<<" DURATA: "<<array[i].durata<<endl;
			}
	      }
			break;
		}
		
		case 3:{
			ofstream File_Nomecanzone("./nomi.txt");
			ofstream File_Nomeartista("./artisti.txt");
			ofstream File_durata("./durata.txt");
			
			for(int i=0;i<posizione;i++){
				File_Nomecanzone>>array[i].nomedellacanzone;
				File_Nomeartista>>array[i].artista;
				File_durata>>array[i].durata;
			}
			
			File_Nomecanzone.close();
			File_Nomeartista.close();
			File_durata.close();
			
			break;
		}
	  
	  }	
	  	
	}
	while(scelta!=0);
	
	
	
	
	
	system("pause");
	return 0;
}
