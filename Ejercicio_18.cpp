#include <iostream>
#include <string.h>
using namespace std;
bool Balanceado(string frase) {
    int n=0;
	while (frase[n]!='\0') {
		n++;
	}
	int balanceo=0;
    
    for (int i=0;i<n;++i) {
        if (frase[i]=='(') {
            balanceo++;
        } else if (frase[i]==')') {
            balanceo--;
        }
        if (balanceo<0) {
            return false; 
        }
    } 
    if (balanceo==0) {
    	return true;
	}
}

int main() {
    bool valida;
	string test;
	cout<<"Dada una frase comprobar si el balanceo de los parentesis es correcto."<<endl;
	cout<<"Ingrese una frase con parentesis"<<endl;
	getline(cin,test);
	valida=Balanceado(test);
	if (valida==true) {
		cout<<"Los parentesis estan balanceados"<<endl;
	} else {
		cout<<"Los parentesis no estan balanceados"<<endl;
	}
    return 0;
}