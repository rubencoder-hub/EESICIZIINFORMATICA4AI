#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

struct SCARPA{
	string MARCA;
	string MODELLO;
	string TAGLIA;
	string PREZZO
};

const char nomefile[] ="./dati/archivio.csv";

void caricaDaFile(SCARPA array[], int& nScarpe){
	std::ifstream file(nomefile);
	sdt::string riga;
	
	while(std::getline(file, riga)){
		std::istringstream streamRiga(riga);
		std::string elemento;
		
		std::string marca;modello,taglia,prezzo;
		while(std::getline(streamRiga,elemento,',')) {
			
			marca = elemento;
		}
	}
}

int main() {
	
	
	
}
