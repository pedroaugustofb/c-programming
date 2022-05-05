#include <stdio.h>
#include <math.h>


void CalculaHexagono(float lado, float *area, float *perimetro){

    float x, y;

    x = (3*(pow(lado, 2))*sqrt(3)) /2;

    y = 6*lado;

    *area = x;
    *perimetro = y;

}
 
int main() {
    float lado, area = -1, perimetro = -1;

    printf("Insira o valor do lado do hexagono: ");
    scanf("%f", &lado);

    CalculaHexagono(lado, &area, &perimetro);

    printf("%.2f, %.2f", area, perimetro);
    
    return 0;
}