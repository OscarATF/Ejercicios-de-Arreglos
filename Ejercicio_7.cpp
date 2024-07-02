#include <iostream>
using namespace std;
int main() {
    int n,i;
    cout<<"Invertir un Arreglo"<<endl;
    cout<<"Cuantos numeros quieres ingresar al arreglo? "<<endl;
    cin>>n;
	int array[n];
	cout<<"Ingrese los elementos del arreglo:"<<endl;
  	for (i=0;i<n;i++) {
  		cin>>array[i];
  	}
  	for (i=n-1;i>=0;i--) {
  		cout<<array[i]<<endl;
  	}
  	return 0;
  }
  	
