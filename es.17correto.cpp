#include<iostream>
#include<fstream>
#include<string>
using namespace std;

char fileTitoli ="./nomi.txt";
char fileartisti ="./artisti.txt";
char filedurate ="./durata.txt";

struct CANZONE {
	string titolo;
	string artista;
	int durata;
};


void inserisciCanzone(int& contatore,CANZONE array[] ){
						
    		cout<<"Inserisci il titolo: ";
			cin>> array[contatore].titolo;
			cout<<"Inserisci l'artista: ";
			cin>> array[contatore].artista;
			cout<<"Inserisci la durata: ";
			cin>> array[contatore].durata;
		    contatore++;
					
}

void stampaCanzone(CANZONE canzone){
			cout<<" Titolo: "<<canzone.titolo<<endl;
			cout<<" Artista: "<<canzone.titolo<<endl;
			cout<<" Durata: "<<canzone.titolo<<endl;
			cout<< endl;
}

void ordinaperdurata(CANZONE array[], int contatore){
			bool cambiamenti;
			CANZONE temp;	
			do{
				cambiamenti = false;
				for(int i=0; i<contatore-1;i++){
					if(array[i].durata>array[i+1].durata){
						temp = array[i];
						array[i] = array[i+1];
						array[i+1] = temp;
						cambiamenti = true;
					}
				}	
			}while(cambiamenti);
	
}

void CaricaDatidelfile(CANZONE array[],int& contatore) {
			contatore = 0;
			
			ifstream fTitoli(fileTitoli);
			ifstream fArtisti(fileartisti);
			ifstream fDurate(filedurate);
			string titolo, artista;
			int durata;
			while(fTitoli >> titolo) {
				
			}
}

int main() {
	
	const int maxCanzoni = 10;
	int nCanzoniInserite;
	CANZONE album[maxCanzoni];
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
			inserisciCanzone();
			break;
		}
		
		case 2:{
			stampaCanzone();
			break;
		}
		
		case 3:{
			ordinaperdurata();
			break;
		}
	  
	  }	
	  	
	}
	while(scelta!=0);


	system("pause");
	return 0;
}
