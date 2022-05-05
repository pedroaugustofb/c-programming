#include <stdio.h>
#include <math.h>


float Rafael(int inputOne, int inputTwo){
    float result;
    result = ( pow((3*inputOne), 2) ) + ( inputTwo*inputTwo );
    return result;
}

float Beto(int inputOne, int inputTwo){
    float result;
    result = ( 2 * (inputOne * inputOne) ) + (pow( (5*inputTwo),2 ));
    return result;
}

float Carlos(int inputOne, int inputTwo){
    float result;
    result = (-100*inputOne) + (pow(inputTwo, 3));
    return result;
}

int verifyValues(int value){
    int status;
    if(value > 0){
        if(value <= 100)
            return status = 1;
    } else{
        return status = 2;
    }
    
}
 
int main() {
 
    int count, inputOne, inputTwo, quantEntrys, value;
    float resultRafael, resultBeto, resultCarlos;

    scanf("%d", &quantEntrys);

    for(count = 1; count <= quantEntrys; count++){
        scanf("%d %d", &inputOne, &inputTwo);

        value = verifyValues(inputOne);
        if(value == 2) return 1;
        value = verifyValues(inputTwo);
        if(value == 2) return 1;

        resultRafael = Rafael(inputOne, inputTwo);
        resultBeto = Beto(inputOne, inputTwo);
        resultCarlos = Carlos(inputOne, inputTwo);

        if(resultRafael>resultBeto && resultRafael>resultCarlos) printf("Rafael ganhou\n");
        else if(resultBeto>resultCarlos && resultBeto>resultRafael) printf("Beto ganhou\n");
        else if(resultCarlos>resultBeto && resultCarlos>resultRafael) printf("Carlos ganhou\n");

    }
 
    return 0;
}