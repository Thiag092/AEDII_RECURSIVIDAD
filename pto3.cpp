#include <stdio.h>

void invertir(int);


int numero, r;

int main(){
	printf("Ingrese numero\n");
	scanf("%d", &numero);
	printf("El numero ingresado es: %d\n", numero);
	
	printf("El numero invertido es: ");
	invertir(numero);
	
	
}

void invertir(int pNumero){
	
	if(pNumero<=0){
		printf("\nPROGRAMA FINALIZADO!\n");
	}else{
		
		r=pNumero%10;

		printf("%d", r);
		
		invertir(pNumero/10);
	}

	
}
