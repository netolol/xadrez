# Xadrez

# ♟️ Simulador de Movimentação de Peças de Xadrez em C

Este projeto foi desenvolvido como parte de um estudo prático para aplicar estruturas de repetição, loops aninhados e recursividade na linguagem C, simulando os movimentos das peças de um jogo de xadrez.

---

## 📌 Descrição

O projeto simula os movimentos válidos de peças de xadrez em um tabuleiro 8x8, usando diferentes técnicas de controle de fluxo e estruturas de repetição. A ideia central é movimentar as peças por meio de código, sem a interface gráfica tradicional, respeitando as regras de movimentação de cada peça.

---

## 📚 Estrutura do Projeto

O projeto é dividido em **três módulos**, cada um com um nível de dificuldade e técnicas diferentes:

### ✅ Módulo Básico
- Movimentação da **Torre**, **Bispo** e **Rainha**
- Utiliza:
  - `for` para a **Torre**
  - `while` para o **Bispo**
  - `do-while` para a **Rainha**

### ✅ Módulo Aventureiro
- Movimentação do **Cavalo** (movimento em "L")
- Utiliza:
  - **Loops aninhados** e condicionais para verificar as 8 possíveis posições válidas

### ✅ Módulo Mestre
- Movimentação avançada da **Rainha**
- Utiliza:
  - **Recursividade** para percorrer todas as direções válidas
  - **Loops complexos e múltiplas condições** para controlar as direções e limites do tabuleiro

---

## 📊 Exemplo de Saída

O tabuleiro é exibido no terminal como uma matriz 8x8:
- `8` representa a posição inicial da peça
- `1` representa as casas válidas onde a peça pode se mover
- `0` representa as casas bloqueadas ou fora do alcance da peça

---

## 🚀 Como Executar

1. Clone o repositório:
   ```bash
   git clone https://github.com/netolol/xadrez.git
Compile o arquivo C:

	gcc main.c -o xadrez

Execute o programa:

	./xadrez

Siga as instruções para informar a posição inicial da peça.
