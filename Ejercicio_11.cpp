#include <iostream>
using namespace std;
int main() {
	int n;
	int i;
	int sumP=0,sumN=0;
	cout<<"Calcular la suma de elementos positivos y negativos en un arreglo"<<endl;
	cout<<"Ingrese la capacidad del arreglo :"<<endl;
	cin>>n;
	int arreglo[n];
	cout<<"Ingrese numeros positivos y negativos :"<<endl;
	for (i=0;i<n;i++) {
		cin>>arreglo[i];
		}
		cout<<"Los numeros ingresados son : "<<endl;
	for (i=0;i<n;i++) {
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
	
	for (i=0;i<n;i++) {
		if (arreglo[i]>0) {
			sumP+=arreglo[i];
		} else if (arreglo[i]<0) {
			sumN+=arreglo[i];
		
		}
	}
	cout<<"La suma de los numeros positivos es : "<<sumP<<endl;
	cout<<"La suma de los numeros negativos es : "<<sumN<<endl;
}