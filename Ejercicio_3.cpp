#include <iostream>
#include <string.h>
using namespace std;

void ocurrencia(string cadena,char letraEsp) {
	int n=0,cont=0;
	while (cadena[n]!='\0') {
		n++;
	}
	for (int i=0;i<n;i++) {
		if (cadena[i]==letraEsp) {
			cont++;
		}
	}
	cout<<"La letra "<<letraEsp<<" se repite "<<cont<<" veces.";
}
int main() {
	string array;
	char letra;
	cout<<"Ingrese una oracion:"<<endl;
	getline(cin,array);
	cout<<"Ingrese la letra especifica:"<<endl;
	cin>>letra;
	cout<<"Contar la ocurrencia de la letra "<<"'"<<letra<<"'"<<" en una cadena de entrada"<<endl;
	ocurrencia(array,letra);
	return 0;
}