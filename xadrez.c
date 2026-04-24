  #include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// ==================== FUNÇÕES RECURSIVAS ====================

// Função recursiva para o movimento da Torre (Direita)
void moverTorre(int casas)
{
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha (Esquerda)
void moverRainha(int casas)
{
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento do Bispo com loops aninhados
void moverBispo(int casas)
{
    if (casas == 0) return;

    // Loop externo: movimento vertical (Cima)
    for (int vertical = 0; vertical < 1; vertical++)
    {
        // Loop interno: movimento horizontal (Direita)
        for (int horizontal = 0; horizontal < 1; horizontal++)
        {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// ==================== MAIN ====================

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasBispo = 5;
    int casasTorre = 5;
    int casasRainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    //BISPO (WHILE)

    printf("Movimento de Bispo: \n");
    int i = 0;
    while (i < casasBispo)
    {
        printf("Cima, Direita\n");
        i++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    //TORRE (FOR)

    printf("Movimento de Torre:\n");
    for (int j = 0; j < casasTorre; j++)
    {
        printf("Direita\n");
    }

    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    //RAINHA (DO-WHILE)

    printf("Movimento da Rainha\n");

    int k = 0;
    do
    {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimento do cavalo:\n");

    // Loop FOR para as duas casas para baixo
    for (int vertical = 0; vertical < 2; vertical ++)
    {
        printf("Baixo\n");
    }

    // Loop WHILE para a uma casa para a esquerda

    int horizontal = 0;
    while (horizontal < 1)
    {
        printf("esquerda\n");
        horizontal++;
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // TORRE RECURSIVA
    printf("\nMovimento da Torre (Recursivo):\n");
    moverTorre(casasTorre);

    // BISPO RECURSIVO COM LOOPS ANINHADOS
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispo(casasBispo);

    // RAINHA RECURSIVA
    printf("\nMovimento da Rainha (Recursivo):\n");
    moverRainha(casasRainha);

    // CAVALO COM LOOPS ANINHADOS COMPLEXOS (duas casas para CIMA e uma para DIREITA)
    printf("\nMovimento do Cavalo (Mestre):\n");

    int cima, direita;

    for (cima = 0; cima < 2; cima++)
    {
        printf("Cima\n");

        if (cima < 1) continue;

        for (direita = 0; direita < 1; direita++)
        {
            printf("Direita\n");
            break;
        }
    }

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
