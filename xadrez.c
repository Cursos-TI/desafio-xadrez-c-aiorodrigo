#include <stdio.h>

void moverTorreRecursivo(int casas, const char* direcao) {
    if (casas > 0) {
        printf("%s\n", direcao);
        moverTorreRecursivo(casas - 1, direcao);
    }
}

void moverRainhaRecursivo(int casas, const char* direcao) {
    if (casas > 0) {
        printf("%s\n", direcao);
        moverRainhaRecursivo(casas - 1, direcao);
    }
}

void moverBispoRecursivoComLoopsAninhados(int casasVerticais, int casasHorizontais) {
    if (casasVerticais > 0 && casasHorizontais > 0) {
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 1; j++) {
                printf("Cima, Direita\n");
            }
        }
        moverBispoRecursivoComLoopsAninhados(casasVerticais - 1, casasHorizontais - 1);
    }
}

int main() {
    printf("--- Movimento da Torre (Recursivo) ---\n");
    int casasTorre = 5;
    moverTorreRecursivo(casasTorre, "Direita");
    printf("\n");

    printf("--- Movimento do Bispo (Recursivo com Loops Aninhados) ---\n");
    int casasBispoDiagonal = 5;
    moverBispoRecursivoComLoopsAninhados(casasBispoDiagonal, casasBispoDiagonal);
    printf("\n");

    printf("--- Movimento da Rainha (Recursivo) ---\n");
    int casasRainha = 8;
    moverRainhaRecursivo(casasRainha, "Esquerda");
    printf("\n");

    printf("--- Movimento do Cavalo (Loops Aninhados Complexos) ---\n");
    int maxMovesCavalo = 1;
    
    for (int l_saltos = 0; l_saltos < maxMovesCavalo; l_saltos++) {
        int parte_l = 0;
        int impresso_direita = 0;
        
        while (parte_l < 3) {
            if (parte_l < 2) {
                printf("Cima\n");
            } else {
                if (!impresso_direita) {
                    printf("Direita\n");
                    impresso_direita = 1;
                }
            }
            parte_l++;
        }
    }
    printf("\n");

    return 0;
}