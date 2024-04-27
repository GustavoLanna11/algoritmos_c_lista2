#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int he, me, hs, ms, ht, mt, v;

    printf("Digite a hora de entrada: ");
    scanf("%d",&he);
    printf("Digite a hora de saida: ");
    scanf("%d",&hs);
    printf("Digite a minuto de entrada: ");
    scanf("%d",&me);
    printf("Digite a minuto de saida: ");
    scanf("%d",&ms);

    ht = hs - he;
    mt = ms - me;

    if((ht==1) && (mt == 0)){
        printf("O valor cobrado sao 4 reais.");
    } else if ((ht ==1 )&&(mt != 0)){
        printf("O valor cobrado sao 6 reais.");
    } else if ((ht == 2)&&(mt==0)){
        printf("O valor a ser cobrado sao 6 reais.");
    } else if((ht == 2)&&(mt != 0)){
        printf("O valor a ser pago sao 7 reais.");
    } else{
        v = (ht - 2) + 6;
        printf("O valor a ser pago sao %d", v);
    }


}
