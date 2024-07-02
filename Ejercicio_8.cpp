#include <iostream>
using namespace std;
bool verifica(string cadena) {
	bool val;
	int n=0;
	int i;
	while (cadena[n]!='\0') {
		n++;
	}
	//Verificacion capicua
	val=true;
	for (i=0;i<n;i++) {
        if (cadena[i]!=cadena[9-i]) {
            val=false;
            break;
        }
	}
	   return val;
}

int main() {
    string array;
    bool validacion;
    	cout<<"Comprobar si un numero de 10 cifras es capicua usando un arreglo"<<endl;
  		cout<<"Ingrese un numero de 10 digitos"<<endl;
  		cin>>array;
  		validacion=verifica(array);
  	if (validacion==true) {
  		cout<<"El numero ingresado es capicua";
 	} else {
  		cout<<"El numero ingresado no es capicua";
  	}
}