//overloding e overriding 
#include<iostream>
using namespace std;

class somme{
	
	public:
	int somma(int n1,int n2) {
		return n1+n2;
	}
	
	int somma(int n1,int n2,int n3) {
		return n1+n2+n3;
	}
	
	double somma(double n1,double n2) {
		return n1+n2;
	}
};

int main() {
	
	
	somme* calcolatrice = new somme();
	
	calcolatrice->somma(4,5,3.2);
	calcolatrice->somma(2,6,1);
}
