/**
 * DESAFIO: MOVIMENTAÇÃO DE PEÇAS DE XADREZ
 * Nível: Novato, Aventureiro e Mestre
 * 
 * Este programa simula o movimento das peças de xadrez usando:
 * - RECURSIVIDADE: Torre, Bispo e Rainha
 * - LOOPS COMPLEXOS: Cavalo (com múltiplas variáveis)
 * - LOOPS ANINHADOS: Bispo (vertical + horizontal)
 * 
 * Autor: Matheus Torres
 * Data: 18/02/2026
 */

#include <stdio.h>

// ===================================================
// PROTÓTIPOS DAS FUNÇÕES RECURSIVAS
// ===================================================
void moverTorreRecursivo(int casas);
void moverBispoRecursivo(int casas);
void moverBispoComLoopsAninhados(int casas);
void moverRainhaRecursivo(int casas);
void moverCavaloComplexo();

// ===================================================
// FUNÇÃO PRINCIPAL
// ===================================================
int main() {
    int opcao;
    
    do {
        // Exibição do menu principal
        printf("\n========================================\n");
        printf("  MOVIMENTAÇÃO DE PEÇAS DE XADREZ\n");
        printf("========================================\n");
        printf("Autor: Matheus Torres\n");
        printf("Nível: MESTRE\n");
        printf("========================================\n");
        printf("1 - Mover TORRE (5 casas DIREITA) - RECURSIVA\n");
        printf("2 - Mover BISPO (5 casas DIAGONAL) - RECURSIVA\n");
        printf("3 - Mover BISPO (5 casas DIAGONAL) - LOOPS ANINHADOS\n");
        printf("4 - Mover RAINHA (8 casas ESQUERDA) - RECURSIVA\n");
        printf("5 - Mover CAVALO (2 Cima + 1 Direita) - LOOPS COMPLEXOS\n");
        printf("6 - Sair do programa\n");
        printf("========================================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("\n--- MOVENDO TORRE (RECURSIVA) ---\n");
                printf("Movimento: 5 casas para DIREITA\n\n");
                moverTorreRecursivo(1);  // Começa da casa 1
                break;
                
            case 2:
                printf("\n--- MOVENDO BISPO (RECURSIVA) ---\n");
                printf("Movimento: 5 casas na DIAGONAL (Cima + Direita)\n\n");
                moverBispoRecursivo(1);  // Começa da casa 1
                break;
                
            case 3:
                printf("\n--- MOVENDO BISPO (LOOPS ANINHADOS) ---\n");
                printf("Movimento: 5 casas na DIAGONAL (Cima + Direita)\n");
                printf("Loop externo: VERTICAL | Loop interno: HORIZONTAL\n\n");
                moverBispoComLoopsAninhados(5);
                break;
                
            case 4:
                printf("\n--- MOVENDO RAINHA (RECURSIVA) ---\n");
                printf("Movimento: 8 casas para ESQUERDA\n\n");
                moverRainhaRecursivo(1);  // Começa da casa 1
                break;
                
            case 5:
                printf("\n--- MOVENDO CAVALO (LOOPS COMPLEXOS) ---\n");
                printf("Movimento em L: 2 casas para CIMA + 1 casa para DIREITA\n");
                printf("Usando loops aninhados com múltiplas variáveis e condições\n\n");
                moverCavaloComplexo();
                break;
                
            case 6:
                printf("\n✅ Encerrando programa...\n");
                printf("Obrigado por utilizar o simulador!\n");
                break;
                
            default:
                printf("\n❌ Opção inválida! Digite um número entre 1 e 6.\n");
        }
    } while(opcao != 6);
    
    return 0;
}

// ===================================================
// FUNÇÃO RECURSIVA DA TORRE
// ===================================================
// Esta função chama a si mesma até atingir 5 casas
void moverTorreRecursivo(int casas) {
    // Caso base: se já moveu 5 casas, para a recursão
    if(casas > 5) {
        printf("\n✅ Torre chegou ao destino!\n");
        return;
    }
    
    // Ação: move uma casa para direita
    printf("Casa %d: Direita\n", casas);
    
    // Passo recursivo: chama a si mesma para a próxima casa
    moverTorreRecursivo(casas + 1);
}

// ===================================================
// FUNÇÃO RECURSIVA DO BISPO
// ===================================================
void moverBispoRecursivo(int casas) {
    // Caso base
    if(casas > 5) {
        printf("\n✅ Bispo chegou ao destino!\n");
        return;
    }
    
    // Ação: move na diagonal (cima + direita)
    printf("Casa %d: Cima, Direita\n", casas);
    
    // Passo recursivo
    moverBispoRecursivo(casas + 1);
}

// ===================================================
// FUNÇÃO DO BISPO COM LOOPS ANINHADOS
// ===================================================
// Loop externo: movimento VERTICAL (cima)
// Loop interno: movimento HORIZONTAL (direita)
void moverBispoComLoopsAninhados(int casas) {
    int vertical, horizontal;
    int casaAtual = 1;
    
    // Loop externo - movimento VERTICAL (cima)
    for(vertical = 1; vertical <= casas; vertical++) {
        
        // Loop interno - movimento HORIZONTAL (direita)
        for(horizontal = 1; horizontal <= casas; horizontal++) {
            
            // Só imprime quando vertical == horizontal (movimento diagonal)
            if(vertical == horizontal) {
                printf("Casa %d: Cima, Direita\n", casaAtual);
                casaAtual++;
            }
        }
    }
    
    printf("\n✅ Bispo (loops aninhados) chegou ao destino!\n");
}

// ===================================================
// FUNÇÃO RECURSIVA DA RAINHA
// ===================================================
void moverRainhaRecursivo(int casas) {
    // Caso base
    if(casas > 8) {
        printf("\n✅ Rainha chegou ao destino!\n");
        return;
    }
    
    // Ação: move para esquerda
    printf("Casa %d: Esquerda\n", casas);
    
    // Passo recursivo
    moverRainhaRecursivo(casas + 1);
}

// ===================================================
// FUNÇÃO DO CAVALO COM LOOPS COMPLEXOS
// ===================================================
// Movimento: 2 casas para CIMA + 1 casa para DIREITA
// Usa múltiplas variáveis e condições complexas
void moverCavaloComplexo() {
    
    // Versão 1: Usando FOR com múltiplas variáveis
    printf("Versão 1 - FOR com múltiplas variáveis:\n");
    printf("----------------------------------------\n");
    
    // Loop externo com 2 variáveis: movimento e direção
    for(int movimento = 1, direcao = 1; movimento <= 2; movimento++, direcao++) {
        
        if(movimento == 1) {
            // Primeira parte: 2 casas para CIMA
            printf("\nFASE 1 - Subindo:\n");
            
            // Loop interno com condição composta
            for(int passo = 1, limite = 2; passo <= limite; passo++) {
                printf("  Passo %d: Cima\n", passo);
                
                // Usando break se algo acontecesse (exemplo didático)
                if(passo == 2 && movimento == 1) {
                    // Continua normalmente, mas mostra que poderia ter break
                    printf("    (2 passos para cima concluídos)\n");
                }
            }
        }
        else {
            // Segunda parte: 1 casa para DIREITA
            printf("\nFASE 2 - Indo para direita:\n");
            
            // Loop interno com variável diferente
            for(int passo = 1; passo <= 1; passo++) {
                printf("  Passo %d: Direita\n", passo);
            }
        }
    }
    
    printf("\n");
    
    // Versão 2: Usando WHILE com múltiplas condições
    printf("Versão 2 - WHILE com múltiplas condições:\n");
    printf("------------------------------------------\n");
    
    int etapa = 1;
    int passosRestantes;
    
    while(etapa <= 2) {
        
        if(etapa == 1) {
            printf("\nFASE 1 - Subindo (WHILE):\n");
            passosRestantes = 2;
            
            while(passosRestantes > 0) {
                printf("  Passo: Cima (faltam %d)\n", passosRestantes);
                passosRestantes--;
                
                // Continue example (pula se algo acontecesse)
                if(passosRestantes == 1) {
                    // Continue pularia para próxima iteração
                    // Aqui só ilustramos
                }
            }
        }
        else {
            printf("\nFASE 2 - Indo para direita (WHILE):\n");
            passosRestantes = 1;
            
            do {
                printf("  Passo: Direita (faltam %d)\n", passosRestantes);
                passosRestantes--;
            } while(passosRestantes > 0);
        }
        
        etapa++;
    }
    
    // Versão 3: Simulando um tabuleiro (bônus)
    printf("\nVersão 3 - Simulação em matriz 3x3 (bônus):\n");
    printf("--------------------------------------------\n");
    
    int tabuleiro[3][3] = {0};  // Tabuleiro 3x3 vazio
    int linha = 2, coluna = 1;   // Posição inicial (próxima a mover)
    
    printf("Posição inicial: [%d][%d]\n", linha, coluna);
    
    // Move 2 casas para CIMA (diminui linha)
    for(int cima = 1; cima <= 2; cima++) {
        linha--;  // Sobe uma linha
        printf("Movendo para CIMA: nova posição [%d][%d]\n", linha, coluna);
    }
    
    // Move 1 casa para DIREITA (aumenta coluna)
    for(int direita = 1; direita <= 1; direita++) {
        coluna++;  // Vai para direita
        printf("Movendo para DIREITA: nova posição [%d][%d]\n", linha, coluna);
    }
    
    printf("\n✅ Posição final do Cavalo: [%d][%d]\n", linha, coluna);
    printf("\n✅ Cavalo movido com sucesso usando loops complexos!\n");
}
