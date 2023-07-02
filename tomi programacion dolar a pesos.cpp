#include <iostream>
#include <conio.h>
using namespace std;
int ConvertirPesos(int dolares);

int main(){

	int x;
	int pesos;
	cout<<"ingrese los dolares: ";
	cin>>x;
	
	pesos=ConvertirPesos(x);
	
	cout<<"los dolares convertidos en pesos: "<<pesos<<endl;
}
int ConvertirPesos(int dolares){
	int pearg;
	pearg=dolares*331.37;
	
	return pearg;
}