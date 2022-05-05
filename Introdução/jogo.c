#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, incorreto = 1, gameWon;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;
	while (palpite != correto && incorreto < 6) {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);

            if (palpite > correto){
                puts("Palpite alto!");
                printf("Palpite errado, esse foi seu palpite de numero %d\n", incorreto);
                incorreto++;
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
                printf("Palpite errado, esse foi seu palpite de numero %d\n", incorreto);
                incorreto++;
            } else if(palpite = correto){
                gameWon = 1;
                break;
            } else if(incorreto > 5){
                break;
            }

	}

    if(!gameWon){
        puts("Voce acertou!");
        printf("Voce precisou de %d palpites para acertar!", incorreto);
    } else {
        puts("Voce esgotou suas chances!");
    }


	return 0;
}