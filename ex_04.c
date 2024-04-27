#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int tempo;
    float salario, bonus1, salario1, bonus2, salario2;

    printf("Digite seu salario: ");
    scanf("%f",&salario);
    printf("Digite seu tempo de empresa: ");
    scanf("%d",&tempo);

    bonus1=0.2;
    salario1=(bonus1*salario)+salario;

    bonus2=0.1;
    salario2=(bonus2*salario)+salario;


    if(tempo>=5){
       printf("Voce recebu um bonus de 20 porcento, seu salario agora eh: %2.f",salario1);
    }
    else{
         printf("Voce recebeu um bonus de 10 porcento, seu salario agora eh: %2.f",salario2);
    }
}
