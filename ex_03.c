#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int num1, num2, num3;

    printf("Digite o numero 1: ");
    scanf("%d",&num1);
    printf("Digite o numero 2: ");
    scanf("%d",&num2);
    printf("Digite o numero 3: ");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3){
        printf("O maior numero eh o primeiro digitado: %d",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("O maior numero eh o segundo digitado: %d",num2);
    }
    else if(num3>num1 && num3>num2){
        printf("O maior numero eh o terceiro digitado: %d",num3);
    }
}
