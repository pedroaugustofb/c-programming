#include <stdio.h>
#include <math.h>

float Delta (float a, float b, float c){
    float resultadoDelta;
    return resultadoDelta = ( ( b*b ) -4*( a*c ) );
}

float RaizX1 (float a, float b, float delta) {
    float resultadoRaizX1;
    return resultadoRaizX1 =( ( -b/2*a ) + sqrt( delta )/( 2*a ) );
}

float RaizX2 (float a, float b, float c) {
    float resultadoRaizX2, delta;
    delta = Delta(a, b, c);
    return resultadoRaizX2 =( ( -b/2*a ) + sqrt( delta )/( 2*a ) );

}



int main(void){ 
    float A2,B2,C2;
    float ResultX1, ResultX2, delta, Result;

    printf("\nDigite o 'A' da equacao: ");
    scanf("%f", &A2);

    printf("\nDigite o 'B' da equacao: ");
    scanf("%f", &B2);

    printf("\nDigite o 'C' da equacao: ");
    scanf("%f", &C2);


    delta = Delta(A2, B2, C2);

    if( A2 == 0){
        return 1;
    }else {

        if(delta < 0){
            return 2;
        } else if(delta > 1){

            ResultX1 = RaizX1(a, b, delta);
            ResultX2 = RaizX2(a, b, c);
            
            Result = printf("%.2f, %.2f", ResultX1, ResultX2);
            printf("Resultado de Raizes: %.2f", Result);
        } else {
            Result = (-B2/2*A2);
            printf("Resultado de Raizes: %.2f", Result);
        }

    }

    return 0;
}
