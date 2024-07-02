#include <iostream>
#include <string.h>

using namespace std;

// Función que comprueba si el apellido está en el nombre completo
bool contieneApellido(string nombreCompleto,string apellido) {
	int n=0;
	while (nombreCompleto[n]!='\0') {
		n++;
	}
	int m=0;
	while (apellido[m]!='\0') {
		m++;
	}
    for (int i = 0; i <= n - m; i++) {
        bool validaApellido = true;
        for (int j = 0; j < m; j++) {
            if (nombreCompleto[i + j] != apellido[j]) {
                validaApellido = false;
                break;
            }
        }
        if (validaApellido) {
            return true;
        }
    }
    return false;
}

int main() {
    string nombreCompleto, apellido;
	cout<<"Funcion que dado el nombre completo de una persona y un apellido, compruebe si el apellido pertenece a esa persona."<<endl;
    cout<<"Introduce el nombre completo ( Nombre y Apellido ): "<<endl;
    getline(cin, nombreCompleto);

    cout<<"Introduce un apellido: "<<endl;
    getline(cin, apellido);

    if (contieneApellido(nombreCompleto, apellido)) {
        cout << "El apellido '" << apellido << "' si pertenece a '" << nombreCompleto << "'." << endl;
    } else {
        cout << "El apellido '" << apellido << "' no pertenece a '" << nombreCompleto << "'." << endl;
    }
    return 0;
}