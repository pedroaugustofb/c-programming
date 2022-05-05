#include <stdio.h>

int main(void){
    int n, quantidadeDivisores;
    
    printf("Informe um numero natural : ");
    scanf("%d", &n);

    
    for (int i = 1; i<= n; i++){
        int divisao = n % i;
        if(divisao == 0){
            quantidadeDivisores++;
        }
    }

    if(quantidadeDivisores > 2){
        printf("Nao eh primo");
    } else if(quantidadeDivisores <= 2){
        printf("eh primo.");
    }

    return 0;
}
