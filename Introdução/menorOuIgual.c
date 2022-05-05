#include <stdio.h>

int main(void){
    float numero1, numero2;

    printf("Informe o numero 1: ");
    scanf("%f", &numero1);
    printf("Informe o numero 2: ");
    scanf("%f", &numero2);

    if (numero1 = numero2){
        printf("\nOs numeros sao iguais");
    } else {
        if(numero1 > numero2){
            printf("\nO numero %.1f eh o menor", numero2);
        } else {
            printf("\nO numero %.1f eh o menor", numero1);
        }
    }

    return 0;
}
