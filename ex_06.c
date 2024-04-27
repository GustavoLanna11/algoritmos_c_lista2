#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int codigo;

    printf("Digite o codigo do produto: ");
    scanf("%d",&codigo);

    switch(codigo){
        case 1:
            printf("O alimento eh nao perecivel.");
        break;
        case 2:
            printf("Alimento perecivel!");
        break;
        case 3:
            printf("Alimento perecivel!");
        break;
        case 4:
            printf("Alimento perecivel!");
        break;
        case 5:
            printf("Vestuario!");
        break;
        case 6:
            printf("Vestuario!");
        break;
        case 7:
            printf("Higiene pessoal!");
        break;
        case 8:
            printf("Utensilios domesticos");
        break;
        case 9:
            printf("Utensilios domesticos");
        break;
        case 10:
            printf("Utensilios domesticos");
        break;

        default:
            printf("Codigo invalido!");
    }
    return 0;

}
