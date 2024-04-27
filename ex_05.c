#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int parcelas;
    float salario, emprestimo, valor_parcela;

    printf("Digite seu salario: ");
    scanf("%f",&salario);
    printf("Digite o valor do emprestimo: ");
    scanf("%f",&emprestimo);
    printf("Digite o numero de parcelas: ");
    scanf("%d",&parcelas);

    valor_parcela=emprestimo/parcelas;

    if(valor_parcela<=0.3*salario) {
        printf("Seu emprestimo foi aprovado!!!");
    } else {
        printf("Seu emprestimo nao foi aprovado...");
    }
}
