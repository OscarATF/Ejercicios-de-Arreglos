#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int almacenaNumero(string cad) {
	int i,n;
	string digito;
	int m=0;
	while (cad[m]!='\0') {
		m++;
	}
	for (i=0;i<m;i++) {
		if (isdigit(cad[i])) {
			digito+=cad[i];
		} 
	}
	n=stoi(digito)+2;
	return n;
}

int main() {
	int i;
	string cadena,num;
	cout<<"Programa que lee una linea de entrada y descarta todos los simbolos excepto los digitos, convirtiendolo en entero y sumandole 2"<<endl;
	cout<<"Ingrese una oracion:"<<endl;
	getline(cin,cadena);
	cout<<almacenaNumero(cadena);
	return 0;
}