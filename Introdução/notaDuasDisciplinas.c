#include <stdio.h>


int main(){
    float nota1, nota2, nota3, nota4, nota5, nota6;
    float unidade1, unidade2, unidade3, mediaUnidade;

    printf("Informe a nota 1 da disciplina 1: ");
    scanf("%f", &nota1);
    printf("Informe a nota 2 da disciplina 1: ");
    scanf("%f", &nota2);
    printf("Informe a nota 3 da disciplina 1: ");
    scanf("%f", &nota3);
    printf("Informe a nota 1 da disciplina 2: ");
    scanf("%f", &nota4);
    printf("Informe a nota 2 da disciplina 2: ");
    scanf("%f", &nota5);
    printf("Informe a nota 3 da disciplina 2: ");
    scanf("%f", &nota6);

    if(nota1 > nota4){
        unidade1 = (6*nota1 + 4*nota4) / 10;
    }else {
        unidade1 = (6*nota4 + 4*nota1) / 10;
    }

    if(nota2 > nota5){
        unidade2 = (6*nota2 + 4*nota5) / 10;
    }else {
        unidade2 = (6*nota5 + 4*nota2) / 10;
    }

    if(nota3 > nota6){
        unidade3 = (6*nota3 + 4*nota6) / 10;
    }else {
        unidade3 = (6*nota6 + 4*nota3) / 10;
    }

    mediaUnidade = (unidade1 + unidade2+ unidade3) / 3;

    printf("Media: %.2f", mediaUnidade);

    return 0;
}