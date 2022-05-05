#include <stdio.h>

int main(void){
    float altura, peso;
    char sexo;

    printf("Informe o sexo[M / F]: ");
    scanf("%c", &sexo);

    printf("Informe a altura: ");
    scanf("%f", &altura);

    if(sexo=='M'){
        peso = (72.7*altura) - 58;
        printf("peso ideal eh: %.2f", peso);
    }
    else if (sexo='F'){
        peso = (62.1*altura) - 44.7;
        printf("peso ideal eh: %.2f", peso);
    }

    return 0;
}
