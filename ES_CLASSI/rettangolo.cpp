#include<iostream>
using namespace std;

	class Rettangolo{
		
		private:
			int lato1;
			int lato2;
		public:	
			Rettangolo(int l1,int l2){
				lato1=l1;
				lato2=l2;
			}
			
			int getLATO1(){
				return lato1;
			}
			int getLATO2(){
				return lato2;
			}
			
			int perimetro(){
				return(lato1+lato2)+2;
			}
			
			int area(){
				return lato1+lato2;
			}
	};

int main() {
	
	int lato1,lato2;
	cout<<"Inserire il primo lato: ";
	cin>>lato1;
	
	cout<<"Inserire il secondo lato: ";
	cin>>lato2;
	
	Rettangolo* rettangolo= new Rettangolo(lato1,lato2);

	cout << "Il perimetro e': " << rettangolo->perimetro() << endl;
	cout << "L'area e': " << rettangolo->area() << endl;

	delete rettangolo;
	
	return 0;
}
