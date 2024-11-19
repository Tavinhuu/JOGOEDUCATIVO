<img src="https://i.ibb.co/wyzGC6k/escolha-a-dificuldade.png">
<br><br>
<img src="https://i.ibb.co/PtJn9Vh/OPERACAO.png">
<br><br>
<img src="https://i.ibb.co/94py6j2/ACERTOU.png">
<br><br>
<img src="https://i.ibb.co/YRXwvCN/ERROU.png">

# Jogo de Matemática - Escolha a Dificuldade

Este é um simples jogo de matemática onde o usuário escolhe um nível de dificuldade, e dois números aleatórios são gerados para serem somados, subtraídos ou multiplicados. A pontuação é exibida conforme o progresso do jogador.

## Funcionalidade

O jogo oferece 4 níveis de dificuldade, que determinam os valores dos números que serão gerados para as operações matemáticas:

1. **Nível 1 (Fácil):** Valores entre 0 e 10.
2. **Nível 2 (Médio):** Valores entre 0 e 100.
3. **Nível 3 (Difícil):** Valores entre 0 e 1000.
4. **Nível 4 (Insano):** Valores entre 0 e 10000.

## Como Jogar

1. Ao iniciar o programa, o usuário será apresentado a um menu com a opção de escolher o nível de dificuldade.
2. Com a dificuldade escolhida, dois números aleatórios dentro do intervalo da dificuldade serão gerados.
3. O jogador deve realizar a operação matemática (soma, subtração ou multiplicação) e inserir a resposta.
4. A pontuação será exibida conforme o desempenho do jogador.

## Funções

### `mostrarInfo()`

A função `mostrarInfo()` exibe informações detalhadas sobre o nível de dificuldade atual e a operação matemática que o jogador deve resolver.

- **Exibe o Nível de Dificuldade:**
  - Dependendo do valor de `calc1.dificuldade`, o nível será mostrado na tela (Fácil, Médio, Difícil ou Insano).
- **Exibe a Operação Matemática:**
  - Se `calc1.operacao == 0`, exibe uma soma.
  - Se `calc1.operacao == 1`, exibe uma multiplicação.
  - Se `calc1.operacao == 2`, exibe uma divisão.
  - Se `calc1.operacao == 3`, exibe uma subtração.

### `adicao()`

A função `adicao()` executa a operação de **adição** para o jogador, dependendo do nível de dificuldade escolhido. O fluxo do jogo é o mesmo em todos os níveis, mas os valores dos números variam conforme a dificuldade.

- **Exibe a operação de adição** e solicita que o jogador insira a resposta (`calc1.chute`).
- Se o jogador acertar, o programa:
  - Informa que o jogador acertou e adiciona 1 ponto à pontuação.
  - Pergunta se o jogador deseja tentar novamente ou voltar ao início.
- Se o jogador errar:
  - Informa que o jogador errou e oferece a opção de tentar novamente ou voltar ao início.

#### Fluxo de Execução
1. O programa gera dois números aleatórios (`calc1.valor1` e `calc1.valor2`) conforme a dificuldade.
2. A operação é exibida ao jogador, que deve inserir a resposta.
3. Se a resposta estiver correta, o jogador ganha um ponto e pode tentar novamente ou voltar ao início.
4. Se a resposta estiver errada, o jogador tem a mesma opção.

### `multiplicacao()`

A função `multiplicacao()` executa a operação de **multiplicação** para o jogador, dependendo do nível de dificuldade escolhido. O fluxo da função é o mesmo da função `adicao()`, mas a operação realizada é uma multiplicação.

- **Exibe a operação de multiplicação** e solicita que o jogador insira a resposta (`calc1.chute`).
- Se o jogador acertar:
  - O programa informa que o jogador acertou e adiciona 1 ponto à pontuação.
  - O jogador tem a opção de tentar novamente ou voltar ao início.
- Se o jogador errar:
  - O programa informa que o jogador errou e oferece a opção de tentar novamente ou voltar ao início.

#### Fluxo de Execução
1. O programa gera dois números aleatórios (`calc1.valor1` e `calc1.valor2`) conforme a dificuldade.
2. A operação de multiplicação é exibida ao jogador, que deve inserir a resposta.
3. Se a resposta estiver correta, o jogador ganha um ponto e pode tentar novamente ou voltar ao início.
4. Se a resposta estiver errada, o jogador tem a mesma opção.

 ### `subtração()`

A função `subtração()` executa a operação de **subtração** para o jogador, dependendo do nível de dificuldade escolhido. O fluxo da função é o mesmo da função `adicao()`, mas a operação realizada é uma subtração.

- **Exibe a operação de subtração** e solicita que o jogador insira a resposta (`calc1.chute`).
- Se o jogador acertar:
  - O programa informa que o jogador acertou e adiciona 1 ponto à pontuação.
  - O jogador tem a opção de tentar novamente ou voltar ao início.
- Se o jogador errar:
  - O programa informa que o jogador errou e oferece a opção de tentar novamente ou voltar ao início.

#### Fluxo de Execução
1. O programa gera dois números aleatórios (`calc1.valor1` e `calc1.valor2`) conforme a dificuldade.
2. A operação de subtração é exibida ao jogador, que deve inserir a resposta.
3. Se a resposta estiver correta, o jogador ganha um ponto e pode tentar novamente ou voltar ao início.
4. Se a resposta estiver errada, o jogador tem a mesma opção.



