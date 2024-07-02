#include <iostream>
using namespace std;
int main() {
    int i,cumple=0,n,ultimo;
    	cout<<"Rotar las componentes de un vector una posicion hacia la derecha"<<endl;
		cout<<"Ingrese la capacidad del arreglo:"<<endl;
		cin>>n;
		int array[n]; 
		cout<<"Ingrese los elementos del arreglo:"<<endl;
	for (i=0;i<n;i++) {
        cin>>array[i];
    }
    ultimo=array[n-1];
    for (i=n-1;i>0;i--) {
    	array[i]=array[i-1];
	}
	array[0]=ultimo;
	for (i=0;i<n;i++) {
		cout<<array[i]<<" ";
	}
	return 0;
}

