#include<iostream>
using namespace std;

void invertiarray(int array[],int inizio,int fine){
	if(fine<=inizio) return;
	int *p1 =&array[inizio];
	int *p2 =&array[fine];
	
	int temp =*p2;
	+p2 = *p1;
	
	return
}

int main() {
	




	system("pause");
	return 0;
}
