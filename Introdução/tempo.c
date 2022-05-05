#include <stdio.h>

int main(void){

    int horas, minutos, segundos, tempo;

    printf("Digite o valor em segundos: ");
    scanf("%d", &tempo);

    if ( tempo <= 86399){

        segundos = tempo % 60;
        minutos = tempo / 60;
        horas = minutos / 60;
        minutos = minutos % 60;

        printf("%02d:%02d:%02d", horas, minutos, segundos);
    }
    else {
        printf("numero invalido (valor deve ser menor igual a 86399)");
    }

    return 0;
}
