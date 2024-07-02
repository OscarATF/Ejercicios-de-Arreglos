#include <iostream>
#include <string.h>
using namespace std;

void ocurrencia(string cadena) {
	int n=0,cont=0;
	while (cadena[n]!='\0') {
		n++;
	}
	for (int i=0;i<n;i++) {
		if (cadena[i]=='o') {
			cont++;
		}
	}
	cout<<"La letra 'o' se repite "<<cont<<" veces.";
}
int main() {
	string array;
	array="Hola a todos";
	cout<<"Contar la ocurrencia de una letra especifica en una cadena de entrada"<<endl;
	cout<<endl<<array<<endl<<endl;
	ocurrencia(array);
	return 0;
}