#include <iostream>
using namespace std;
bool funcionArr(int array[],int longitud) {
		int i;
		//Verificacion Ascendente
		bool Ascendente=true;
		for (i=0;i<longitud-1;i++) { 
			if (array[i]>array[i+1]) {
				Ascendente=false;
				break;
			}
		}
		//Verificacion Descendente
		bool Descendente=true;
		for (i=0;i<longitud-1;i++) { 
			if (array[i]<array[i+1]) {
				Descendente=false;
				break;
			}
		}
	return Ascendente || Descendente ; 
}
int main() {
	int n,i,tam;
	bool validacion;
	cout<<"Implementar una funcion que reciba un arreglo, su longitud y retorne true si el mismo se encuentra ordenado, false en caso contrario"<<endl;
	cout<<"Ingrese la capacidad del arreglo:"<<endl;
	cin>>n;
	int arreglo[n];
	tam=sizeof(arreglo)/sizeof(arreglo[0]);
	cout<<"Ingrese numeros:"<<endl;
	for (i=0;i<tam;i++) {
		cin>>arreglo[i];
		}
		validacion=funcionArr(arreglo,tam);
		cout<<"Los numeros ingresados son : "<<endl;
	for (i=0;i<tam;i++) {
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
	if (validacion==true) {
		cout<<"Los numeros ingresados estan en orden"; //Ascendente o descendente
	} else {
		cout<<"Los numeros ingresados no estan en ningun orden";
	}
}
	
	