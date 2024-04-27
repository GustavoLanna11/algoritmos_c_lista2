#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    media=(nota1 + nota2)/2;

    if(media >= 7){
        printf("O aluno foi aprovado! \n");
        printf("A nota dele eh: %.2f \n",media);
    }

    else{
        printf("O aluno esta reprovado! \n");
        printf("A nota dele eh: %.2f \n",media);
    }
}

