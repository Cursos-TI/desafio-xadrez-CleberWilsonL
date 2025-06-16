#include <stdio.h>

// ---------- Funções Recursivas (Nível Mestre) ----------
void moverBispoRecursivo(int passos) {
    if (passos == 0) return;
    printf("Diagonal Superior Direita: Cima + Direita\n");
    moverBispoRecursivo(passos - 1);
}

void moverTorreRecursivo(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorreRecursivo(passos - 1);
}

void moverRainhaRecursivo(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(passos - 1);
}

// ---------- Main ----------
int main() {
    // ---------- Nível Novato ----------
    const int passosBispo = 5;
    const int passosTorre = 5;
    const int passosRainha = 8;

    printf("=== NÍVEL NOVATO ===\n");

    // Bispo - usando for
    for (int i = 0; i < passosBispo; i++) {
        printf("Diagonal Superior Direita: Cima + Direita\n");
    }

    // Torre - usando while
    int i = 0;
    while (i < passosTorre) {
        printf("Direita\n");
        i++;
    }

    // Rainha - usando do-while
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < passosRainha);

    // ---------- Nível Aventureiro ----------
    printf("\n=== NÍVEL AVENTUREIRO ===\n");
    printf("Movimentação do Cavalo (em L):\n");

    // Loop aninhado: for externo, while interno
    for (int l = 0; l < 1; l++) { // Apenas 1 L
        int passo1 = 0;
        while (passo1 < 2) {
            printf("Baixo\n");
            passo1++;
        }
        int passo2 = 0;
        while (passo2 < 1) {
            printf("Esquerda\n");
            passo2++;
        }
    }

    // ---------- Nível Mestre ----------
    printf("\n=== NÍVEL MESTRE ===\n");

    printf("Bispo (Recursivo):\n");
    moverBispoRecursivo(passosBispo);

    printf("Torre (Recursivo):\n");
    moverTorreRecursivo(passosTorre);

    printf("Rainha (Recursivo):\n");
    moverRainhaRecursivo(passosRainha);

    printf("Cavalo (em L para cima e direita):\n");

    // Cavalo com break/continue e múltiplas variáveis
    int cima = 0, direita = 0;
    for (int k = 0; k < 3; k++) {
        if (k == 1) continue; // pular o segundo passo (só como exemplo do uso de continue)
        if (k > 2) break;

        if (cima < 2) {
            printf("Cima\n");
            cima++;
        } else {
            printf("Direita\n");
            direita++;
        }
    }

    return 0;
}
