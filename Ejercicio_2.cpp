#include <iostream>
#include <string.h>
using namespace std;

void palabra(string cadena) {
	int n=0;
	while (cadena[n]!='\0') {
		n++;
	}
	for (int i=0;i<n;i++) {
		if (cadena[i]!=' ') {
			cout<<cadena[i];
		} else {
		cout<<endl;
		}
	}
}
int main() {
	cout<<"Programa que haga 'eco' de la entrada, poniendo cada palabra en una linea separada."<<endl;
	cout<<"Ingrese una oracion:"<<endl;
	string oracion;
	getline(cin,oracion); //Para almacenar espacios
	palabra(oracion);
	return 0;
}