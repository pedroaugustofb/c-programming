#include <stdio.h>

int main(void){

    float numero1, numero2;

    printf("Digite o numero 1: ");
    scanf("%f", &numero1);
    printf("Digite o numero 2: ");
    scanf("%f", &numero2);

    if ( numero1 < numero2 ){
        printf("numero menor: %.2f\n", numero1);
    }
    if ( numero1 > numero2){
        printf("numero menor: %.2f\n", numero2);
    } else {
        printf("os numeros sao iguais.");
    }

    return 0;
}
