#include<iostream>
using namespace std;

class Test{
	private:
		int n1;
		int n2;
		
	public:
		Test(int n1,int n2) {
			this->n1 = n1;
			this->n2 = n2;
		}
		
		Test operator + (Test const &object) {
			Test risultato;
			risultato.n1 = this->n1 + object.n2;
			risultato.n2 = this->n2 + object.n1;
			
			return risultato;
			
		}
		
		
		
		
		
		
		
		
		
		
};
