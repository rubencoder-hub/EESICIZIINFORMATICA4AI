//quick sort
#include<iostream>
using namespace std;

const int D = 10;

	int partition(int array[],int inizio,int fine) {
		int pivot = array[fine];
		int i = inizio;
		
		for(int j=inizio;j<fine;j++) {
			if(array[j]<pivot) {
				int temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				i++;
			}
			int temp = array[i];
			array[i] = array[fine];
			array[fine]  = temp;
		}
		return i;
	}
	
	void quickSort(int array[],int inizio,int fine ) {
		if(fine<=inizio) return;
		int pi = partition(array,inizio,fine);
		
		quickSort(array,inizio,pi-1);
		quickSort(array,pi+1,fine);				
	}

int main(){
	
	int array[D];
	
	cout<<"Insire : "<<endl;
	for(int i=0;i<D;i++) {
		cin>>array[i];
	}

	for(int i=0;)
	
	system("pause");
	return 0;
}
