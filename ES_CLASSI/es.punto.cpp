#include <iostream>
#include <cmath>  
using namespace std;

	class Punto {
	private:
	    double x, y;  
	
	public:
	    
	    Punto(double x = 0, double y = 0) : x(x), y(y) {}
	
	    
	    double distanza() const {
	        return sqrt(x * x + y * y);  
	    }

    
	    double distanza(const Punto& altroPunto) const {
	        double dx = x - altroPunto.x;
	        double dy = y - altroPunto.y;
	        return sqrt(dx * dx + dy * dy);  
	    }

	    
	    void stampa() const {
	        cout << "Punto: (" << x << ", " << y << ")" << endl;
	    }
};

int main() {
    
    Punto p1(5, 4);  
    Punto p2(7, 4);  

    
    cout << "Distanza di p1 dall'origine: " << p1.distanza() << endl;

    
    cout << "Distanza tra p1 e p2: " << p1.distanza(p2) << endl;

    return 0;
}

