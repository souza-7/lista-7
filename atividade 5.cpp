#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
	int num[82], numero, *ponteiro;
    
    for (int i = 1; i <= 80; i++)
    {
        num[i] = i;
    }
    printf("DIGITE UM N�MERO PARA FAZER A VERIFICA��O DELE: ");
    	scanf("%d", &numero);
    for (int i = 1; i <= 80; i++)
    {
        if (num[i] == numero)
        {
            ponteiro = &num[i];
            printf("O N�MERO %d FOI VERIFICADO COM SUCESSO E EST� NA POSI��O %d E SEU ENDERE�O � %d", numero, num[i], ponteiro);
            break;
        }
    }

    return 0;
}
