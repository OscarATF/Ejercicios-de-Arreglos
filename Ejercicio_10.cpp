#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	float media;
	int Random,aux,contador,tam,moda,mediana,i,j;
	int maxRep=0;
	int suma=0;
	int Array[30];
	tam=sizeof(Array)/sizeof(Array[0]);
	srand(time(0));
	for (i=0;i<30;i++) {
		Random=rand()%901+100;
		Array[i]=Random;
		suma+=Random;
	}
	cout<<"Generar 30 numeros aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadisticas de tendencia central media, mediana y moda."<<endl;
	cout<<"Los 30 numeros generados aleatoriamente son: "<<endl;
	for (i=0;i<30;i++) {
		cout<<Array[i]<<" ";
	}
	cout<<endl;
	
		media=(float)suma/tam; //MEDIA
	for (i=0;i<29;i++) { //Ordenamiento Ascendente
		for (j=i+1;j<30;j++) {
			if (Array[i]>Array[j]) {
				aux=Array[i];
				Array[i]=Array[j];
				Array[j]=aux;
			}
		}
	}
		mediana=Array[14]; //MEDIANA
	for (i=0;i<30;i++) { 
				contador=0;
		for (j=0;j<30;j++) {
				if (Array[i]==Array[j]) {
				contador++;
				}
			}
			if (contador>maxRep) {
					maxRep=contador;
					moda=Array[i]; //MODA
			}
	}
	cout<<"Ordenados ascendentemente: "<<endl;
	for (i=0;i<30;i++) {
		cout<<Array[i]<<" ";
	}
	cout<<endl;
	
	cout<<"La media es : "<<media<<endl;
	cout<<"La mediana es : "<<mediana<<endl;
	
	if (maxRep!=1) {
		cout<<"La moda es : "<<moda<<endl;
	} else {
		cout<<"La moda no existe"<<endl;
	}
}