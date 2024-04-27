#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    if(idade>=18){
        printf("Voce eh maior de idade! \n");
        printf("Sua idade eh: %d \n",idade);
    }

    else {
        printf("Voce eh menor de idade! \n");
        printf("Sua idade eh: %d \n",idade);
    }
}
