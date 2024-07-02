#include <iostream>
using namespace std;

char* mistrcpy(char cadena1[],char cadena2[]) {
	int n=0;
	while (cadena2[n]!='\0') {
		n++;
	}
	for (int i=0;i<=n;i++) {
		cadena1[i]=cadena2[i];
	}
	return cadena1;
}

int main() {
	cout<<"Funcion mistrcpy(str1,str2) que copia str2 en str1 sin usar la funciones de String.h\n"<<endl;
	char str2[]="Copia cadena 2 en cadena 1";
	char str1[100];
	mistrcpy(str1,str2);
	cout<<str1;
	return 0;
}