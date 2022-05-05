#include <stdio.h>

int battlePomekons(int AtakOne, int AtakTwo, int DefOne, int DefTwo, int LevelOne, int LevelTwo, int Bonus){

    float pomekonOne, pomekonTwo;
    int result;

    pomekonOne = LevelOne%2;

    if(pomekonOne == 0) pomekonOne = ((AtakOne + DefOne) / 2) + Bonus;
    else if (pomekonOne == 1) pomekonOne = ((AtakOne + DefOne) / 2);

    pomekonTwo = LevelTwo%2;
    if(pomekonTwo == 0) pomekonTwo = ((AtakTwo + DefTwo) / 2) + Bonus;
    else if(pomekonTwo == 1) pomekonTwo = ((AtakTwo + DefTwo) / 2);

    if(pomekonOne>pomekonTwo) return result = 2;
    else if(pomekonTwo>pomekonOne) return result = 3;
    else return result = 1;

}

int verifyValues(int atak, int def, int level){
    int res;
    if(atak < 1 || atak > 100) return res = -1;
    if(def < 1 || def > 100) return res = -1;
    if(level < 1 || level > 50) return res = -1;
    return res = 1;
}


 
int main() {
 
    int count, count2, quantEntrys, inputBonus;
    int atak[5], def[5], level[5];
    int result, verify;

    scanf("%d", &quantEntrys);

    for(count = 1; count <= quantEntrys; count++){
        scanf("%d", &inputBonus);
        if(inputBonus>=0 && inputBonus<=100){
            for(count2 = 0; count2 <=1; count2++){
                scanf("%d %d %d", &atak[count2], &def[count2], &level[count2]);
                verify = verifyValues(atak[count2], def[count2], level[count2]);
                if (verify == -1) return 1;
            }
            result = battlePomekons(atak[0], atak[1], def[0], def[1], level[0], level[1], inputBonus);

            if(result == 1) printf("Empate\n");
            else if (result == 2) printf("Dabriel\n");
            else if(result == 3) printf("Guarte\n");
        }
    }
 
    return 0;
}