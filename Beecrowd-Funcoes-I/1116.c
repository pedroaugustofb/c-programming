#include <stdio.h>

long long fatorial(int n){                                               

  long long fac = 1;
  int counter;

  for(counter = 1; counter <= n; counter++){
      fac = fac * counter;
  }
  return fac;
}
 
int main() {
    
    int inputValueOne, inputValueTwo;
    int count;
    long long result;

    while(1){

        scanf("%d %d", &inputValueOne, &inputValueTwo);

        if(inputValueOne <=20 && inputValueTwo <=0){
            result = fatorial(inputValueOne) + fatorial(inputValueTwo);
            printf("%lld\n", result);
        }

    }

 
    return 0;
}