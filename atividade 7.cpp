#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float precosAntigos[100], precosNovos[100], porcentagem;
    int opcao;

    for (int i = 0; i <= 100; i++)
    {
        printf("DIGITE O VALOR DO %d� CD: ", i+1);
        scanf("%f", &precosAntigos[i]);
        fflush(stdin);
    }
    printf("AUMENTAR:\n1-10%% DO VALOR\n2-VALOR ESPEC�FICO\n");
    printf("DIGITE O N�MERO CORRESPONDENTE: ");
    	scanf("%d", &opcao);
    fflush(stdin);
    if (opcao == 1)
    {
        for (int i = 0; i <= 100; i++)
        {
            precosNovos[i] = (precosAntigos[i] * 110) / 100;
        }
    }
    else if (opcao == 2)
    {
        printf("DIGITE A PORCENTAGEM PARA AUMENTAR OS PRE�OS: ");
        	scanf("%f", &porcentagem);
        fflush(stdin);
        for (int i = 0; i <= 100; i++)
        {
            precosNovos[i] = (precosAntigos[i] * (100 + porcentagem)) / 100;
        }
    }
    
    for (int i = 1; i <= 100; i++)
    {
        printf("PRE�O ANTIGO DO %d� CD: %.2f || PRE�O NOVO: %.2f\n", i+1, precosAntigos[i], precosNovos[i]);
    }
    return 0;
}
