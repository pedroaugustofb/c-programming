#include <stdio.h>

int main(void){
    int idade;

    printf("Informe a idade: ");
    scanf("%d", &idade);

    if(idade < 21){
        printf("\nvoce eh jovem");
    } else if(idade > 21 && idade <61){
        printf("\nvoce eh adulto");
    } else if(idade > 60){
        printf("\nvoce eh idoso");
    }

    return 0;

}
