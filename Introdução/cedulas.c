#include <stdio.h>

int main(void){
    int valor, quant, resto;
    int cedula;

    printf("Informe o valor: ");
    scanf("%d", &valor);

    for( int count = 0; count <= 6; count ++){

        switch(count){
            case 0:
                cedula = 100;
                break;
            case 1:
                cedula = 50;
                break;
            case 2:
                cedula = 20;
                break;
            case 3:
                cedula = 10;
                break;
            case 4:
                cedula = 5;
                break;
            case 5:
                cedula = 2;
                break;
            case 6:
                cedula = 1;
                break;
        }

        quant = valor / cedula;
        resto = valor %cedula;
        printf("%02d notas de %d\n", quant, cedula);
        valor = resto;

    }

    return 0;
}
