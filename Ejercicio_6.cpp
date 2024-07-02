#include <iostream>
using namespace std;
int main() {
    int n,i;
    int sumPar=0,sumImpar=0;
    cout<<"Programa que calcula la suma de componentes de indice par e impar en un arreglo."<<endl;
    cout <<"Cuantos numeros quieres ingresar? "<<endl;
    cin >> n;
	int array[n];
  	for (i=0;i<n;i++) {
  		cout<<"Ingrese un numero"<<endl;
  		cin>>array[i];
  	}
  	for (i=0;i<n;i++) {
  		if (i%2==0) {
  			sumPar+=array[i];
		  } else {
		  	sumImpar+=array[i];
		  }
	}
	cout<<"La suma de los componentes de los indices par es: "<<sumPar<<endl;
	cout<<"La suma de los componentes de los indices impar es: "<<sumImpar;
}