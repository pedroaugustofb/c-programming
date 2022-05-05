#include <stdio.h>
#include <math.h>

float equacao2grau (float a, float b, float c){                     // FUNCAO EQUACAO DE SEGUNDO GRAU //
    float x1, x2, d, x;
    float resultado;
    d = ((b*b)-4*(a*c));
    x = (-b/2*a);
    x1 = ((-b/2*a)+sqrt(d)/(2*a));
    x2 = ((-b/2*a)-sqrt(d)/(2*a));
    printf("\nDelta:%.2f\n",d);

  if(d==0){
    printf("\nExistem somente uma raiz de valor=%.2f\n\n", x);
    resultado = x;
  }

  else {

    if(d>0){
       printf("\nAs raizes sao: \nX1=%.2f\nX2=%.2f\n\n", x1, x2);
       resultado = printf("%.2f e %.2f\n", x1, x2);
    }

    else if(d<0){
       printf("\nAs raizes nao sao reais\n\n");
       resultado = 0;}
       return 2;
       }
}




int main(void){ 
    float A2,B2,C2;
    float result;

    printf("\nDigite o 'A' da equacao: ");
    scanf("%f", &A2);

    printf("\nDigite o 'B' da equacao: ");
    scanf("%f", &B2);

    printf("\nDigite o 'C' da equacao: ");
    scanf("%f", &C2);

    if(A2==0){
        printf("\nA nao pode ser 0. ");
        return 1;
    }
    else{

    equacao2grau( A2, B2, C2 );
    }
    return 0;
}
