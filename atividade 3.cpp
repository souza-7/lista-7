#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int dados[100];
	
	for(int i = 0; i<100; i++){
		printf("Digite o número: ");
			scanf("%i", &dados[i]);
	}
	
	int valor = 0;
	for(int j =0; j<100; j++){
		valor = valor + dados[j];
	}
	
	system("CLS");
	printf("O VALOR TOTAL É IGUAL A %i", valor);

	return 0; 
}

