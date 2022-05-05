#include <stdio.h>

int main(void){

    int H1, H2, M1, M2;
    int verify, count;
    int RHours, RMinutes, Result;

    do{
        RHours = 0;
        RMinutes = 0;
        Result = 0;
        H1 = 0;
        H2 = 0;
        M1 = 0;
        M2 = 0;
        scanf("%d %d %d %d", &H1, &M1, &H2, &M2);

        if(H1 >= 0 && H1 <=23){
            if(M1 >= 0 && M1 <=59){
                if(H2 >= 0 && H2 <=23){
                    if(M2 >= 0 && M2 <=59){
                        if(H1 == 0){
                            if(H2 == 0){
                                if(M1 == 0){
                                    if(M2 == 0){
                                        verify = 0;
                                    }else{
                                        verify = 1;
                                    }
                                }else{
                                    verify = 1;
                                }
                            }else{
                                verify = 1;
                            }
                        }else{
                            verify = 1;
                        }
                    }
                }
            }
        }


        if(verify == 1){
            if(H2 > H1){
                if(M2 > M1){
                    RHours = H2 - H1;
                    RMinutes = M2 - M1;

                }else if(M1 > M2){
                    RHours = 0;
                    RMinutes = (60 - M1) + M2;

                }else{
                    RHours = H2 - H1;
                    RMinutes = 0;
                }
                verify = 2;

            }else if (H1 > H2){

                if(M2 > M1){
                    RMinutes = M2 - M1;
                    RHours = (24 - H1) + H2;

                }else if(M1 > M2){
                    RMinutes = (60 - M1) + M2;
                    RHours = (23 - H1) + H2;

                }else{
                    RMinutes = 0;
                    RHours = (24 - H1) + H2;
                }
                verify = 2;

            }else{

                if(M2 > M1){
                    RMinutes = M2 - M1;
                    RHours = 0;

                }else if(M1 > M2){
                    RMinutes = (60 - M1) + M2;
                    RHours = 23;

                }else{
                    RMinutes = 0;
                    RHours = 0;
                }
                verify = 2;
            }
        }
        
        if (verify == 2){
            Result = (RHours * 60) + RMinutes;
            printf("%d\n", Result);
        }

    }while(verify != 0);


    return 0;
}
