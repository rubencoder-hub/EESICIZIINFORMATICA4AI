#include<iostream>
using namespace std;

	class Colore{
		
		private:
			int r;
			int g;
			int b;
			
		public:
			Colore(int r,int g,int b){
				this->r=r;
				this->g=g;
				this->b=b;
			
			/*	red=(235, 64, 52);
				g(yellow)=(229, 235, 52);
				blue=(52, 95, 235);
				*/
			}
			Colore(){
				this->r=255;
				this->g=255;
				this->b=255;
			}
			double MisuraIntensita(){
				double media=(this->r+this->g+this->b)/3;
				return media;
			}
			
			Colore operator == (Colore const& obj){
				if(this->MisuraIntensita()==obj.MisuraIntensita()) return true;
				
			}
	};
	
	
int main() {
	Colore* c = new Colore(235,64,52);
	Colore* f = new Colore();
}
