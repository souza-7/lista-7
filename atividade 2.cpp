#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota[50];
	int alunos;
	
	printf("QUANTOS ALUNOS? ");
		scanf("%i", &alunos);
	
	if(alunos > 50 || alunos <= 0){
		printf("ESTE VALOR NÃO EXISTE!");
		return 0;
	} 
	
	for(int i = 0; i < alunos; i++){
		printf("DIGITE A %dº NOTA: ", i+1);
			scanf("%d", &nota[i]);
		fflush(stdin);		
	}
	
	printf("\n\nTUDO CERTO!");
	
	return 0;
}
