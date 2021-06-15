#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float salario[100], maior = 0, menor = 0;
    int matricula[100];
    
    for (int i = 0; i <= 5; i++)
    {
        printf("QUAL O NÚMERO DA MATRÍCULA DO %dº FUNCIONÁRIO? ", i+1);
        	scanf("%d", &matricula[i]);
        fflush(stdin);
        printf("DIGITE O SALÁRIO DO %dº FUNCIONÁRIO: ", i+1);
        	scanf("%f", &salario[i]);
        fflush(stdin);
        if (salario[i] > maior)
        {
            maior = salario[i];
        }
    }
    menor = salario[1];
  
    for (int i = 0; i <= 5; i++)
    {
        if (salario[i] < menor)
        {
            menor = salario[i];
        }
    }
   
    for (int i = 0; i <= 5; i++)
    {
    	printf("=================================\n");
        printf("MATRÍCULA: %d\nSALÁRIO R$:%.2f\n", matricula[i], salario[i]);
        printf("=================================\n");
    }
    printf("=================================\n");
    printf("O MAIOR SALÁRIO É: R$:%.2f\n", maior);
    printf("O MENOR SALÁRIO É: R$:%.2f\n", menor);
    printf("=================================\n");

    return 0;
}
