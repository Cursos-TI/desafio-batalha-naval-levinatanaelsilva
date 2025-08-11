#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_HABILIDADE 5

void habilidadeCone() {
    int matrizCone[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {0};

    printf("--- Habilidade em Cone ---\n");
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            // A condição cria o padrão de cone: o número de '1's em cada linha aumenta.
            if (j >= (TAMANHO_HABILIDADE / 2) - i && j <= (TAMANHO_HABILIDADE / 2) + i) {
                matrizCone[i][j] = 1;
            }
            printf("%d ", matrizCone[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void habilidadeCruz() {
    int matrizCruz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {0};

    printf("--- Habilidade em Cruz ---\n");
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            // A condição preenche a linha central e a coluna central com '1'.
            if (i == TAMANHO_HABILIDADE / 2 || j == TAMANHO_HABILIDADE / 2) {
                matrizCruz[i][j] = 1;
            }
            printf("%d ", matrizCruz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


void habilidadeOctaedro() {
    int matrizOctaedro[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {0};
    int centro = TAMANHO_HABILIDADE / 2;

    printf("--- Habilidade em Octaedro ---\n");
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) {
                matrizOctaedro[i][j] = 1;
            }
            printf("%d ", matrizOctaedro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    habilidadeCone();
    habilidadeCruz();
    habilidadeOctaedro();

    return 0;
}