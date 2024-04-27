#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int lado1, lado2, lado3;

    printf("Digite o valor do primeiro lado do triangulo: ");
    scanf("%d",&lado1);
    printf("Digite o valor do segundo lado do triangulo: ");
    scanf("%d",&lado2);
    printf("Digite o valor do terceiro lado do triangulo: ");
    scanf("%d",&lado3);

    if(lado1 == lado2 && lado2 == lado3){
        printf("O triangulo eh isoceles!");
    } else if((lado1 != lado2) && (lado2 != lado3) && (lado3 != lado1)){
        printf("O triangulo eh escaleno!");
    } else if(lado1==lado2 || lado2 == lado3 || lado3==lado1){
        printf("O triangulo eh isoceles!");
    }
}
