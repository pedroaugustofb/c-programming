#include <stdio.h>

int main(void){

    int fn=2 , fx = 1, fy = 1, x = 3;
    int result = 0;
    long long MaxValue;
    long long N;

    scanf("%lld", &N);

    MaxValue = 12000000000000000000;

    printf("%lld %lld", N, MaxValue);

    if(N >= 2){

        do{
            printf("%d\n", fn);
            if(fn == N){
                result = 1;
            } else if( fn > N){
                x = -2;
                result = 1;
            }
            x++;

            fx = fy;
            fy = fn;
            fn = fx + fy;



        }while(result == 0);

        printf("%d", x);
        return 0;
    } else{
        printf("NAO");
        return 1;
    }

}