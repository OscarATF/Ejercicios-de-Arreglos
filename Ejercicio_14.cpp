#include <iostream>
using namespace std;
char* mistrcat(char cadena1[],char cadena2[]) {
	int i=0;
	while (cadena1[i]!='\0') {
		i++;
	}
	int j=0;
	while (cadena2[j]!='\0') {
		cadena1[i]=cadena2[j];
			i++;
			j++;
	}
	return cadena1;
}
int main() {
	cout<<"Funcion mistrcat(str1,str2) que agrega str2 al final de str1 sin usar string.h"<<endl;
	char str1[]="Oscar ";
	char str2[]="Ticona";
	mistrcat(str1,str2);
	cout<<str1;
	return 0;
}