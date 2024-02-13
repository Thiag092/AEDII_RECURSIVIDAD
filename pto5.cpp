#include <stdio.h>
#include <windows.h>

void cuenta(int);
void Sleep(time_t seconds);
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
		Sleep(200);
		cuenta(pNumero -1);
	}
	
}
