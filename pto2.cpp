#include <stdio.h>

void binario(int);

int numero;

int main(){
	printf("Ingrese un numero entero\n");
	scanf("%d", &numero);
	binario(numero);
}

void binario(int pNumero){
	
	if(pNumero<1){
		printf("PROGRAMA FINALIZADO\n");
	}else{
		if((pNumero%2)==0){
		
		printf("0\n");
		}
		else{
			printf("1\n");
		}
		
		binario(pNumero/2);
	}
	
}
