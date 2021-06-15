#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota[30];
	
	for(int i = 0; i < 30; i++){
		printf("DIGITE A %dº NOTA: ", i+1);
			scanf("%d", &nota[i]);
		fflush(stdin);
	}
	
	printf("\n\nTUDO CERTO!");
	
	return 0;
}
