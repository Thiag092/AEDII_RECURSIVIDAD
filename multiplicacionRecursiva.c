#include <stdio.h>

//Variables Globales 
int a, b, res;

//Prototipado de Funciones
void ingresarDatos();
int multiplicacion (int, int);

//Funcion Principal
int main(){
	ingresarDatos();
	multiplicacion(a, b);
	printf("Resultado de la multiplicacion: %d x %d = %d",a, b, res);
}

//Definicion de funciones
void ingresarDatos(){
	printf("Ingrese los numeros a multiplicar: \n");
	scanf("%d", &a);
	printf("x \n");
	scanf("%d", &b);
}

int multiplicacion (int pA, int pB){
	if (pA == 0 || pB == 0){
		return 0;
	}else if (pA < 0 && pB < 0){
		printf("Antes de la llamada:\n");
		printf("A = %d, B = %d, Resultado parcial = %d\n\n", pA, pB, res);
		pA = -pA;
		pB = -pB;
		res = pB + multiplicacion (pB, pA-1);
		printf("Despues de la llamada:\n");
		printf("A = %d, B = %d, Resultado parcial = %d\n\n", pA, pB, res);
		return res;
	}
	else if (pB < 0){
		printf("Antes de la llamada:\n");
		printf("A = %d, B = %d, Resultado parcial = %d\n\n", pA, pB, res);
		res = pB + multiplicacion (pB, pA-1);
		printf("Despues de la llamada:\n");
		printf("A = %d, B = %d, Resultado parcial = %d\n\n", pA, pB, res);
		return res;
	}
	else{
		printf("Antes de la llamada:\n");
		printf("A = %d, B = %d, Resultado parcial = %d\n\n", pA, pB, res);
		res = pA + multiplicacion (pA, pB-1);
		printf("Despues de la llamada:\n");
		printf("A = %d, B = %d, Resultado parcial = %d\n\n", pA, pB, res);
		return res;
	}
}