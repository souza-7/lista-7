#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float salario[100], maior = 0, menor = 0;
    int matricula[100];
    
    for (int i = 0; i <= 5; i++)
    {
        printf("QUAL O N�MERO DA MATR�CULA DO %d� FUNCION�RIO? ", i+1);
        	scanf("%d", &matricula[i]);
        fflush(stdin);
        printf("DIGITE O SAL�RIO DO %d� FUNCION�RIO: ", i+1);
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
        printf("MATR�CULA: %d\nSAL�RIO R$:%.2f\n", matricula[i], salario[i]);
        printf("=================================\n");
    }
    printf("=================================\n");
    printf("O MAIOR SAL�RIO �: R$:%.2f\n", maior);
    printf("O MENOR SAL�RIO �: R$:%.2f\n", menor);
    printf("=================================\n");

    return 0;
}
