#include <stdio.h>


void cuenta(int);

int numero;


int main (){
	printf("Ingrese un numero\n");
	scanf("%d", &numero);
	 cuenta( numero);

}

void cuenta (int pNumero){
	
	if (pNumero <=0){
		printf("CUENTA FINALIZADA!\n");
	}else{
		printf("%d\n", pNumero);
		cuenta(pNumero -1);
	}
	
}
