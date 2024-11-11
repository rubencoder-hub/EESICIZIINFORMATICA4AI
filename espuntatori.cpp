#include<iostream>

#include<fstream>

#include<sstream>

using namespace std;

void SalvaDati(cucciolo *allevamento,int dimensione) {
	
	ofstream  oFile(nomeFile);
	
	oFile<<"nome,razza,peso,mesi \n";
	
	for(int i=0;i<dimensione;i++){
		
		oFile<<allevamento->nome<<",";
		
		oFile<<allevamento->razza<<",";
		
		oFile<<allevamento->peso<<",";
		
		oFile<<allevamento->mesi;
		
		allevamento++;
		
	}
	
	oFile.close();
	
}

int main(){
	 
	 const int dimensione = 10;
	 
	 for(int i=0;i<dimensione;i++) {
	 	
	 	cout<<"nome:";
	 	
	 	cin>>puntatore->nome;
	 	
	 }
	 
	 for(int i=0;i<dimensione;i++) {
	 	
	 	cout<<"razza:";
	 	
	 	cin>>puntatore->razza;
	 	
	 }
	 
	 for(int i=0;i<dimensione;i++) {
	 	
	 	cout<<"peso:";
	 	
	 	cin>>puntatore->peso;
	 	
	 }
	 
	 for(int i=0;i<dimensione;i++) {
	 	
	 	cout<<"mesi:";
	 	
	 	cin>>puntatore->mesi;
	 	
	 }

	system("pause");
	
	return 0;
	
}
