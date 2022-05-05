#include <stdio.h>

int main(void){
    
    float V, G, E;
    int P, R, VerifyValues, PontosUsados, PontosRestantes, TypeComb, PontosGanhos;

    float Comb, Litros, CombComDesconto, Desconto;

    scanf("%f %f %f %d", &V, &G, &E, &P);


    if( V >= 10 && V <= 300){                                         // Verificação se os Valores estão nos intervalos válidos
        if( G >= 2 && G <= 15){
            if( E >= 2 && E <= 15){
                if( P >= 0 && P <= 100 ){
                    VerifyValues = 1;
                }
            }
        }
    }else{
        VerifyValues = 0;
    }

    if(VerifyValues == 1){
        Comb = E / G;                                                  // Verificação de qual o melhor Combustível
        if(Comb > 0.7){
            Comb = G;
            TypeComb = 2;
        }

        else{
            Comb = E;
            TypeComb = 3;
        }
        
        PontosUsados = P / 5;

        Desconto = Comb * ( (float) PontosUsados / 100 );                   // Cálculo de Desconto com Pontos + Valor do Combustivel 
        CombComDesconto = Comb - Desconto;                                  // com Desconto + Quantidade de Litros à Abastecer

        Litros = V / CombComDesconto;

        PontosGanhos = Litros / 10;
        PontosRestantes = (P % 5) + PontosGanhos;

        if(TypeComb == 2){
            printf("%.2f litros de gasolina\n", Litros);
            printf("Pontos restantes: %d\n", PontosRestantes);

        } else if(TypeComb == 3){
            printf("%.2f litros de etanol\n", Litros);
            printf("Pontos restantes: %d\n", PontosRestantes);
        }


        return 0;
    }else {
        return 1;
    }
    
}
