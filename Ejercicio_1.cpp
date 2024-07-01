#include <iostream>
#include <string.h>
using namespace std;

string ponerMayus(string cadena) {
	int n=0;
	while (cadena[n]!='\0') {
		n++;
	}
	for (int i=0;i<n;i++) {
		if (i==0) {
		cadena[i]=toupper(cadena[i]);
	} else if (cadena[i]==' ') {
		cadena[i+1]=toupper(cadena[i+1]);
	}
}
	return cadena;
}
int main() {
	cout<<"Convertir palabras a mayusculas iniciales: 'caceres patrimonio de la humanidad'"<<endl;
	string array="caceres patrimonio de la humanidad"; 
	cout<<ponerMayus(array); //cadena con palabras iniciales en mayuscula
	return 0;
}