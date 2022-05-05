#include <stdio.h>

int main(void){
    int valor1, valor2, max, min;

    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    if(valor1 > valor2){
        max = valor1;
        min = valor2;
    } else if(valor1 < valor2){
        max = valor2;
        min = valor1;
    } else if(valor1 = valor2){
        printf("Valores Iguais.\n");
    }

    do{
        printf("%d\n", min);
        min++;
    } while (min != max + 1);


    return 0;
}
