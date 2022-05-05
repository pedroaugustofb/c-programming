#include <stdio.h>
#include <math.h>

int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2, int *status){
    float delta;

    delta = ((b*b)-4*(a*c));

    if(delta == 0){
        printf("Somente possui uma raiz real\n");
        *x1 = (-b/2*a);
        *status = 2;
    }
    else if(delta < 0){
        printf("Nao possui raizes reais\n");
        return -2;
    } else if(delta >0){
        *x1 = (-b + sqrt(delta)) / (2*a);
        *x2 = (-b - sqrt(delta)) / (2*a);
        *status = 1;
    }
}
 
int main() {
    float inputA, inputB, inputC;
    float x1, x2;
    int status;

    printf("Digite o 'A' da equacao: ");
    scanf("%f", &inputA);

    printf("Digite o 'B' da equacao: ");
    scanf("%f", &inputB);

    printf("Digite o 'C' da equacao: ");
    scanf("%f", &inputC);
    
    if(inputA == 0){
        printf("A nao pode ser 0.");
        return -1;
   } else ResolveEquacao2Grau(inputA, inputB, inputC, &x1, &x2, &status);

   if(status == 1 || status == 2) printf("Raiz 01: %.2f\n", x1);
   if(status == 1) printf("Raiz 02: %.2f\n", x2);
   

        

 
    return 0;
}