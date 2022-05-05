#include <stdio.h>
#include <math.h>

float verifyInputsPositive(float valueA, float valueB, float valueC){
    int type = 0;

    if(valueA > 0 )
        if(valueB > 0)
            if(valueC > 0)
                return type = 4;
    else if(valueA <= 0)
        if(valueB > 0 && valueC > 0)
            return type =1;
        else{
            return type;
        }
    else if(valueB <= 0)
        if(valueA > 0 && valueC > 0)
            return type =2;
        else{
            return type;
        }
    else if(valueC <= 0)
        if(valueA > 0 && valueB > 0)
            return type =3;
        else{
            return type;
        }
    return type;
}


float discoverCorrectValue(float valueOne, float ValueTwo, int type){
    float correctValue;
    switch (type){
        case 1:
            correctValue = sqrt( (valueOne*valueOne) + (ValueTwo*ValueTwo) );
            break;
        case 2:
            correctValue = sqrt( (valueOne*valueOne) - (ValueTwo*ValueTwo) );
            break;
        case 3:
            correctValue = sqrt( (valueOne*valueOne) - (ValueTwo*ValueTwo) );
            break;
        default:
            break;
    }
    return correctValue;
}

float EhTrianguloRetangulo(float valueA, float valueB, float valueC){
    int res;

    if ( valueA = sqrt( (valueB*valueB) + (valueC*valueC) ) )
        res = 1;
    else 
        res = -1;
    
    return res;
    
}


int main(void){ 
    
    float inputA, inputB, inputC;
    int resultVerify;
    float result, correctValue;

    printf("Informe o valor de A: ");
    scanf("%f", &inputA);

    printf("Informe o valor de B: ");
    scanf("%f", &inputB);

    printf("Informe o valor de C: ");
    scanf("%f", &inputC);

    resultVerify = verifyInputsPositive(inputA, inputB, inputC);

    switch (resultVerify){
        case 0:
            printf("Entrada de Dados Invalida.\n");
            return 1;
            break;
        case 1:
            correctValue = discoverCorrectValue(inputB, inputC, resultVerify);
            if(resultVerify == 1)
                printf("O valor de %.2f eh invalido, o valor correto para formar triangulo eh de: %.2f", inputA, correctValue);
            break;
        case 2:
            correctValue = discoverCorrectValue(inputA, inputB, resultVerify);
            if(resultVerify == 1)
                printf("O valor de %.2f eh invalido, o valor correto para formar triangulo eh de: %.2f", inputC, correctValue);
            break;
        case 3:
            correctValue = discoverCorrectValue(inputA, inputC, resultVerify);
            if(resultVerify == 1)
                printf("O valor de %.2f eh invalido, o valor correto para formar triangulo eh de: %.2f", inputB, correctValue);
            break;
        case 4:
            result = EhTrianguloRetangulo(inputA, inputB, inputC);
            if(result == 1)
                printf("Eh possivel formar um triangulo com esse valores: %.2f, %.2f e %.2f.\n", inputA, inputB, inputC);
            
            else if (result == -1)
                printf("Nao eh possivel formar um triangulo com esse valores: %.2f, %.2f e %.2f.\n", inputA, inputB, inputC);
            break;
        
        default:
            break;
    }

    return 0;
}
