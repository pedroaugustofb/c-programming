#include <stdio.h>

double AdicioneMedia(double valor){
    static int timesFunction = 0;
    static double average = 0;

    average = average + valor;
    timesFunction++;

    return average / timesFunction;
}

int main(void){ 
    int inputValue;
    double valueForAverage, result;
    
    printf("Quantos valores serao inseridos? ");
    scanf("%d", &inputValue);

    if(inputValue > 0){
        
        for( int count = 1; count <= inputValue; count++){
            printf("Insira o valor %d: ", count);
            scanf("%lf", &valueForAverage);
            result = AdicioneMedia(valueForAverage);
            if(count == inputValue) printf("Media final: %.2lf\n", result);
            else printf("Media: %.2lf\n", result);
            result = 0;
        }

    }else{
        return 1;
    }

    return 0;
}
