#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    float v, pe, cp, d1, d2, a, vped1, vped2, vpea;

    printf("Digite o preco da etiqueta: ");
    scanf("%f",&pe);
    printf("Digite o codigo de condicao de pagamento: ");
    scanf("%f",&cp);

    d1= (pe/100)*10;
    d2= (pe/100)*5;
    a= (pe*10)/100;
    vped1 = pe-d1;
    vped1 = pe-d2;
    vpea = pe+a;

    if(cp == 1){
        printf("O valor a ser pago eh: %2.f", vped1);
    } else if(cp == 2){
        printf("O valor a ser pago eh %2.f", vped2);
    } else if(cp == 3){
        printf("o valor total a ser pago em duas vezes eh %2.f", pe);
    } else if (cp == 4) {
        printf("O valor total a ser pago em tres vezes eh: %2.f", vpea);
    }
}
