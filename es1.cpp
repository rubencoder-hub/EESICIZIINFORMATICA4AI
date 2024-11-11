#inlude<iostream>
using namespace std;
int main() {
	
	char carattere;
	cout<<"inserisci un carattere: ";
	cin>>carattere;
	
	if((carattere>='A' && carattere<='Z') || (carattere>='a' && carattere<='z')) {
		cout<<"il carattere inserito e' una lettera. "<<endl;
	}
	else{
		cout<<"il carattere non e' una lettera. "<<endl;
	}
	
	system("pause");
	return 0;
}
