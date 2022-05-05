#include <stdio.h>
#include <math.h>

int main(void)
{
    long long x, fn, fx, fy, n;
    long long Max = 12*pow(10, 18);
    scanf("%lld", &n);

    if(n > Max || n < 2){
        return 1;
    }

    x = 4;
    fx = 1;
    fy = 1;
    fn = fx + fy;       // PARA CALCULO DOS TERMOS DE FIBONACCI

    while(fn != n) {
        
        if (fn > n) {             //VERIFICAÇÃO SE É DA SEQUENCIA
            x = -1;
            break;
        }

        fx = fy;
        fy = fn;
        fn = fx + fy;
        x++;
    }

    printf("%lld\n", x);

    return 0;
}