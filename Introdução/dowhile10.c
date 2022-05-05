#include <stdio.h>

int main(void){
    
    int a, b;
    float c;

    a = 025;
    b = 005;
    c = (float)  (a/b) ;

    printf("%o\n", a);
    printf("%o\n", b);
    printf("%.2f", c);
    return 0;
}
