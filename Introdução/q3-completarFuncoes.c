/**
 ============================================================================
 Nome      : q3-completarFuncoes.c
 Autor     : lincoln
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : Exercicio para completar com definicoes de funcoes.
 ============================================================================
 */
#include <stdio.h>

/****
* SomaAteN(): Calcula a soma de todos valores de 0 ate n.
*
* Parametros:
*    n (entrada): o valor do numero natural n, ate onde a soma sera feita.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               -1 (menos 1):   quando o parametro n nao for um natural.
*               valor natural:  valor da soma ate n quando n for natural.
****/
/* IMPLEMENTE AQUI A FUNCAO SomaAteN DE ACORDO COM A DESCRICAO */
float SomaAteN(float n){
    float SomaN;
    if(n > 0){
        for (int count = 0; count<= n; count++){
            SomaN = SomaN + count;
        }
    }else {
        return -1;
    }
    return SomaN;
}

/****
* Fatorial(): Calcula o fatorial de um natural n.
*
* Parametros:
*    n (entrada): o valor do numero natural n.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               -1 (menos 1):   quando o parametro n nao for um natural.
*               valor natural:  valor de n! quando n for natural.
****/
/* IMPLEMENTE AQUI A FUNCAO Fatorial DE ACORDO COM A DESCRICAO */
int Fatorial(int n){
    int result;
    if(n < 0){
        return -1;
    }else {
        for(result = n; n > 1; n--){
            result *= n-1;
        }
        return result;
    }
}
/****
* EhPar(): Indica se um valor inteiro eh par ou impar.
*
* Parametros:
*    x (entrada): o valor de um inteiro x.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               1 (verdadeiro): quando x for par.
*               0 (falso):      quando x for impar.
****/
/* IMPLEMENTE AQUI A FUNCAO EhPar DE ACORDO COM A DESCRICAO */
int EhPar(int x){

    int resto = x %2;

    if(resto == 0){
        return 1;
    }else {
        return 0;
    }
}
/****
* EhDivisivel(): Indica se um numero eh divisivel por outro.
*
* Parametros:
*    a (entrada): um valor inteiro.
*    b (entrada): um valor inteiro.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               1 (verdadeiro): quando a for divisivel por b.
*               0 (falso):      quando a NAO for divisivel por b.
****/
/* IMPLEMENTE AQUI A FUNCAO EhDivisivel DE ACORDO COM A DESCRICAO */
int EhDivisivel(int a, int b){
    int resto = a % b;
    if(resto == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(void) {
    int n, soma, i;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    soma = SomaAteN(n);
    printf("A soma de 1 ateh N eh: %d\n", soma);

    printf("%d! = %d\n", n, Fatorial(n));
    if (EhPar(n)){
        printf("%d eh par\n", n);
    }else{
        printf("%d eh impar\n", n);
    }

    for (i = 2; i <= 15; i++){
        if (EhDivisivel(n, i)){
            printf("%d eh divisivel por %d\n", n, i);
        }else{
            printf("%d nao eh divisivel por %d\n", n, i);
        }
    }

	return 0;
}

