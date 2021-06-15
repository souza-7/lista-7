#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
	int num[82], numero, *ponteiro;
    
    for (int i = 1; i <= 80; i++)
    {
        num[i] = i;
    }
    printf("DIGITE UM NÚMERO PARA FAZER A VERIFICAÇÃO DELE: ");
    	scanf("%d", &numero);
    for (int i = 1; i <= 80; i++)
    {
        if (num[i] == numero)
        {
            ponteiro = &num[i];
            printf("O NÚMERO %d FOI VERIFICADO COM SUCESSO E ESTÁ NA POSIÇÃO %d E SEU ENDEREÇO É %d", numero, num[i], ponteiro);
            break;
        }
    }

    return 0;
}
