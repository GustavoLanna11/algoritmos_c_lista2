#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int numero;
    float resto;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    resto = numero % 2;

    if(resto == 0){
        printf("O numero digitado eh par!");
    } else {
        printf("O numero digitado eh impar!");
    }

}
