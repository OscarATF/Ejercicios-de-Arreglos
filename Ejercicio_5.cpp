#include <iostream>
using namespace std;
int main() {
    int n,aux,j,i;
    int contmenor=0,contmayor=0;
    cout<<"Programa que lee n numeros, encuentra el mayor y el menor, y cuenta sus repeticiones."<<endl;
    cout<<"Cuantos numeros quieres ingresar? "<<endl;
    cin>>n;
	int array[n];
  	for (i=0;i<n;i++) {
  		cout<<"Ingrese un numero:"<<endl;
  		cin>>array[i];
	  }
	for (i=0;i<n-1;i++) {
		for (j=i+1;j<n;j++) {
			if (array[i]>array[j]) {
				aux=array[i];
				array[i]=array[j];
				array[j]=aux;		
			}
		}
	}
	for (i=0;i<n;i++) {
		if (array[i]==array[0]) {
			contmenor++;
		}
		if (array[i]==array[n-1]) {
			contmayor++;
		}
	}
		cout<<"el menor numero es "<<array[0]<<" y se repite "<<contmenor<<" veces"<<endl;
		cout<<"el mayor numero es "<<array[n-1]<<" y se repite "<<contmayor<<" veces";
		
    return 0;
}