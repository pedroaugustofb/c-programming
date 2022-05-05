#include <stdio.h>

int main(void){

    float vMedia[100]; 
    int iMedia = 0;
    float min, max;

    do{
        printf("Digite o fator %d: ", iMedia+1);
        scanf("%f", &vMedia[iMedia]);
        iMedia++;
    } while (vMedia[iMedia - 1] != 0);

    min = vMedia[0];
    max = vMedia[0];

    for(int i=0; i<iMedia; i++){
        if(vMedia[i] < min && vMedia[i] != 0){
            min = vMedia[i];
        }
    }

    for(int i=0; i<iMedia; i++){
        if(vMedia[i] > max && vMedia[i] != 0){
            max = vMedia[i];
        }
    }


    printf("o valor minimo eh: %.2f, e o maximo eh: %.2f", min, max);

    return 0;
}
