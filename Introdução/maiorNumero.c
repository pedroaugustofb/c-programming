#include <stdio.h>

int main(void){
    float numero1, numero2, numero3;

    printf("Informe o numero 1: ");
    scanf("%f", &numero1);
    printf("Informe o numero 2: ");
    scanf("%f", &numero2);
    printf("Informe o numero 3: ");
    scanf("%f", &numero3);

    if(numero1 > numero2 && numero1 > numero3){
        printf("\nO numero %.2f eh o maior", numero1);
    }else if(numero2 > numero1 && numero2 > numero3){
        printf("\nO numero %.2f eh o maior", numero2);
    }else if(numero3 > numero1 && numero3 > numero2){
        printf("\nO numero %.2f eh o maior", numero3);
    }

    return 0;

}
