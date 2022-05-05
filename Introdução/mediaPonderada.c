#include <stdio.h>

int main(void){
    float media1, media2, media3, media4;
    float mediaGeral;

    printf("Informe a media 1: ");
    scanf("%f", &media1);
    printf("Informe a media 2: ");
    scanf("%f", &media2);
    printf("Informe a media 3: ");
    scanf("%f", &media3);
    printf("Informe a media 4: ");
    scanf("%f", &media4);

    media2 = media2 * 2;
    media3 = media3 * 3;
    media4 = media4 * 4;

	mediaGeral = (media1 + media2 + media3 + media4) / 10;

	printf("A media ponderada anual eh : %.2f", mediaGeral);

    return 0;
}
