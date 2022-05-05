#include <stdio.h>

int main(void){
    int divisivel, discovery = 24;

    for(int count = 1 ; count <= 1000; count++){
        divisivel = count % 6;
        if(!divisivel){
            if(count = discovery){
                if(count <= 1000){
                    printf("%d\n", count);
                }
                discovery = discovery + 30;
            }
        }
    }

    return 0;
}
