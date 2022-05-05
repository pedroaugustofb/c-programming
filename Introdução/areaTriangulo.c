#include <stdio.h>

int main(void){
    int b, h;
    float area;


    printf("Digite o valor da altura: ");
    scanf("%d", &h);
    printf("Digite o valor da base: ");
    scanf("%d", &b);

    area = b*h*1.0 /2;

    printf("\nA Area do triangulo de base %d e altura %d eh: %.1f", b, h, area);


    return 0;
}
