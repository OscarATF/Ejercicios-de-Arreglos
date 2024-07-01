#include <iostream>
using namespace std;
int main() {
	int tam;
	int i,j;
	string aux;
	
	cout<<"Ingrese la capacidad del arreglo:"<<endl;
	cin>>tam;
	string arreglo[tam];
	cout<<"Ingrese nombres:"<<endl;
	for (i=0;i<tam;i++) {
		cin>>arreglo[i];
		}
	for (i=0;i<tam-1;i++) {
		for (j=i+1;j<tam;j++) {
			if (arreglo[i]>arreglo[j]) {
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;			}
		}
	}
	cout<<"\nLos nombres ordenados alfabeticamentes son:\n "<<endl;
	for (i=0;i<tam;i++) {
		cout<<arreglo[i]<<endl;
		}
}