# ♜ DESAFIO COMPLETO: MOVIMENTAÇÃO DE PEÇAS DE XADREZ
### Níveis: Novato, Aventureiro e Mestre (Consolidados)

[![Language: C](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Status: Concluído](https://img.shields.io/badge/status-concluído-brightgreen.svg)]()
[![Faculdade: Estácio](https://img.shields.io/badge/faculdade-estácio-blue.svg)]()

---

## 📋 Sobre o Projeto

Este programa é a **versão completa e consolidada** dos três níveis do desafio de movimentação de peças de xadrez da faculdade de Ciência da Computação. Em um **único arquivo**, implementei todos os requisitos dos níveis:

- **🏆 Nível Novato**: Movimentos básicos com estruturas de repetição simples
- **⚔️ Nível Aventureiro**: Movimento do Cavalo com loops aninhados
- **👑 Nível Mestre**: Recursividade e loops complexos

O programa apresenta um menu interativo que permite visualizar cada tipo de movimento separadamente, demonstrando diferentes conceitos de programação em C.

---

## 🎯 Peças e Movimentos Implementados

| Peça | Movimento | Técnica Utilizada | Nível |
|------|-----------|-------------------|-------|
| **TORRE** | 5 casas para DIREITA | Recursividade | Mestre |
| **BISPO** | 5 casas na DIAGONAL (Cima + Direita) | Recursividade | Mestre |
| **BISPO** | 5 casas na DIAGONAL (Cima + Direita) | Loops Aninhados | Mestre |
| **RAINHA** | 8 casas para ESQUERDA | Recursividade | Mestre |
| **CAVALO** | 2 CIMA + 1 DIREITA (movimento em L) | Loops Complexos (3 versões) | Aventureiro/Mestre |

---

## 🧠 Conceitos de Programação Demonstrados

### Nível Novato (presente na base do código)
✅ Estruturas de repetição: `FOR`, `WHILE`, `DO-WHILE`  
✅ Menu interativo com `switch-case`  
✅ Variáveis e constantes bem definidas  
✅ Formatação de saída com `printf`

### Nível Aventureiro (presente no Cavalo)
✅ Loops aninhados (loop dentro de loop)  
✅ Múltiplas variáveis de controle  
✅ Movimento em "L" do Cavalo

### Nível Mestre (destaque do programa)
✅ **Recursividade**: Torre, Bispo e Rainha  
  - Funções que chamam a si mesmas  
  - Caso base e passo recursivo bem definidos  
  - Controle de profundidade para evitar stack overflow

✅ **Loops Complexos**: Cavalo (3 versões diferentes)
  - `FOR` com múltiplas variáveis: `for(int movimento = 1, direcao = 1; ...)`
  - `WHILE` com múltiplas condições
  - `DO-WHILE` com pós-verificação
  - Uso ilustrativo de `break` e `continue`

✅ **Loops Aninhados Avançados**: Bispo
  - Loop externo: controle VERTICAL
  - Loop interno: controle HORIZONTAL
  - Condição para movimento diagonal

✅ **Simulação de Tabuleiro**: Bônus no movimento do Cavalo
  - Matriz 3x3 representando posições
  - Coordenadas [linha][coluna]
  - Movimentação baseada em índices

---

## 🚀 Como Compilar e Executar

### No Linux/Mac:
```bash
gcc main.c -o main
./main
```

### No Windows (com MinGW):
```bash
gcc main.c -o main.exe
main.exe
```

### No VS Code (com Code Runner):
Apenas abra o arquivo e pressione `Ctrl + Alt + N`

---

## 🎮 Menu do Programa

```
========================================
  MOVIMENTAÇÃO DE PEÇAS DE XADREZ
========================================
Autor: Matheus Torres
Nível: MESTRE (completo)
========================================
1 - Mover TORRE (5 casas DIREITA) - RECURSIVA
2 - Mover BISPO (5 casas DIAGONAL) - RECURSIVA
3 - Mover BISPO (5 casas DIAGONAL) - LOOPS ANINHADOS
4 - Mover RAINHA (8 casas ESQUERDA) - RECURSIVA
5 - Mover CAVALO (2 Cima + 1 Direita) - LOOPS COMPLEXOS
6 - Sair do programa
========================================
```

---

## 📊 Exemplo de Saída (Cavalo - Versões Complexas)

```
--- MOVENDO CAVALO (LOOPS COMPLEXOS) ---

Versão 1 - FOR com múltiplas variáveis:
----------------------------------------

FASE 1 - Subindo:
  Passo 1: Cima
  Passo 2: Cima
    (2 passos para cima concluídos)

FASE 2 - Indo para direita:
  Passo 1: Direita

Versão 2 - WHILE com múltiplas condições:
------------------------------------------

FASE 1 - Subindo (WHILE):
  Passo: Cima (faltam 2)
  Passo: Cima (faltam 1)

FASE 2 - Indo para direita (WHILE):
  Passo: Direita (faltam 1)

Versão 3 - Simulação em matriz 3x3 (bônus):
--------------------------------------------
Posição inicial: [2][1]
Movendo para CIMA: nova posição [1][1]
Movendo para CIMA: nova posição [0][1]
Movendo para DIREITA: nova posição [0][2]

✅ Posição final do Cavalo: [0][2]
```

---

## 📁 Estrutura do Projeto

```
📦 desafio-xadrez-completo
 ┣ 📜 main.c      # Código fonte único (todos os níveis)
 ┗ 📜 README.md               # Documentação completa
```

---

## 🔍 Validação dos Requisitos por Nível

### ✅ Nível Novato (Requisitos Atendidos)
- [x] Torre: 5 casas para direita (presente em forma recursiva)
- [x] Bispo: 5 casas diagonal (presente em duas versões)
- [x] Rainha: 8 casas para esquerda (presente em forma recursiva)
- [x] Uso de FOR, WHILE, DO-WHILE
- [x] Saída formatada com printf

### ✅ Nível Aventureiro (Requisitos Atendidos)
- [x] Cavalo: 2 casas para baixo e 1 para esquerda (adaptado para cima/direita)
- [x] Loops aninhados (presente no Cavalo e Bispo)
- [x] FOR + WHILE/DO-WHILE combinados
- [x] Movimento em "L" claramente demonstrado

### ✅ Nível Mestre (Requisitos Atendidos)
- [x] Recursividade: Torre, Bispo e Rainha
- [x] Loops complexos: Cavalo (3 versões com múltiplas variáveis)
- [x] Loops aninhados: Bispo (vertical + horizontal)
- [x] Múltiplas variáveis em loops
- [x] Condições complexas e controle de fluxo
- [x] Documentação detalhada

---

## 💻 Código Fonte

O código está disponível no arquivo [`main.c`](main.c) e contém **comentários detalhados** explicando:

- Cada função recursiva e seu caso base
- Cada tipo de loop e sua finalidade
- As variáveis de controle e suas funções
- Exemplos didáticos de break/continue
- Simulação de tabuleiro para o Cavalo

---

## 👨‍💻 Autor

**Matheus Torres**  
Curso: Ciência da Computação  
Data: 18/02/2026  
GitHub: [Zer0G0ld](https://github.com/Zer0G0ld)
