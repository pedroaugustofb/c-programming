#include <stdio.h>

int main(void){

    float vMedia[100]; 
    int iMedia = 0;
    float resultado;

    do{
        printf("Digite o fator %d: ", iMedia+1);
        scanf("%f", &vMedia[iMedia]);
        iMedia++;
    } while (vMedia[iMedia - 1] != 0);

    for(int i=0; i<iMedia; i++){
        resultado = resultado + vMedia[i];
    }

    resultado = resultado / (iMedia - 1);

    printf("a media eh de : %.2f", resultado);

    return 0;
}
