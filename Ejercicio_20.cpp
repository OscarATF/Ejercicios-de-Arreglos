#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int Meses = 12;
	string nombresMeses[Meses] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", 
    "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    float ventas[Meses];
    float suma_ventas = 0;
    float promedio_ventas;
    int meses_minimo = 0, meses_regular = 0, meses_excelente = 0;
	
	cout<<"Almacen 'La Milagrosa'\n"<<endl;

    for (int i = 0; i < Meses; ++i) {
        cout << "Ingrese las ventas obtenidas en " << nombresMeses[i] << ": ";
        cin >> ventas[i];
        suma_ventas += ventas[i];
    }
    promedio_ventas = suma_ventas / Meses;
    cout << "\nMeses con ventas Excelentes:\n";
    for (int i = 0; i < Meses; ++i) {
        if (ventas[i] < 0.4 * promedio_ventas) {
            ++meses_minimo;
        } else if (ventas[i] >= 0.4 * promedio_ventas && ventas[i] <= 0.75 * promedio_ventas) {
            ++meses_regular;
        } else if (ventas[i] > 0.75 * promedio_ventas) {
            ++meses_excelente;
            cout << nombresMeses[i] << endl;
        }
    }
    cout << "\nPromedio de ventas mensual: " << promedio_ventas << endl;
    cout << "Porcentaje de meses con ventas Minimo: " << (meses_minimo * 100 / Meses) << "%" << endl;
    cout << "Porcentaje de meses con ventas Regular: " << (meses_regular * 100 / Meses) << "%" << endl;
    cout << "Porcentaje de meses con ventas Excelente: " << (meses_excelente * 100 / Meses) << "%" << endl;

    return 0;
}