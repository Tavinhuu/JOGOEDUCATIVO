<img src="https://i.ibb.co/wyzGC6k/escolha-a-dificuldade.png">
<br><br>
<img src="https://i.ibb.co/PtJn9Vh/OPERACAO.png">
<br><br>
<img src="https://i.ibb.co/94py6j2/ACERTOU.png">
<br><br>
<img src="https://i.ibb.co/YRXwvCN/ERROU.png">

**Instruções**

**Proposta de Projeto – Jogo de Cálculos em C**

**1. Objetivo do Projeto**
   
Desenvolver um jogo educacional de cálculo matemático em linguagem de programação C, utilizando conceitos de estruturas de dados, funções, aleatoriedade e manipulação de entradas. O sistema deve permitir que o jogador escolha o nível de dificuldade, resolva operações matemáticas (soma, subtração, multiplicação) e acumule pontos conforme acerta as respostas.

**2. Requisitos do Sistema**

**2.1 Funcionalidades do Sistema**

**1.Escolha de Dificuldade:** O usuário deve poder selecionar entre diferentes níveis de dificuldade (1 a 4), que afetam o intervalo de valores numéricos usados nas operações.

**Nível 1 (Fácil):** Valores entre 0 e 10.

**Nível 2 (Médio):** Valores entre 0 e 100.

**Nível 3 (Difícil):** Valores entre 0 e 1000.

**Nível 4 (Insano):** Valores entre 0 e 10000.

**2.Geração de Operações Aleatórias:** O sistema deve gerar aleatoriamente uma operação de soma, subtração ou multiplicação para ser resolvida pelo jogador.

**3.Avaliação de Respostas:** O sistema deve avaliar se a resposta dada pelo jogador está correta e, em caso de acerto, incrementar os pontos.

**4.Pontuação:** O jogador acumula pontos a cada resposta correta.

**5.Reiniciar o Jogo:** O jogador deve ter a opção de continuar jogando ou encerrar o jogo, exibindo a pontuação final.

**2.2 Regras de Negócio**

O jogador deve selecionar o nível de dificuldade no início do jogo.

As operações são geradas aleatoriamente, podendo ser de soma, subtração ou multiplicação.

O jogador deve inserir a resposta para a operação gerada e receber um feedback sobre a correção da resposta.

O jogo deve continuar até que o jogador opte por encerrar.

Ao final do jogo, a pontuação total deve ser exibida.

**3. Estrutura do Código**

O código deve ser estruturado em funções, para modularidade e melhor organização:

**Função main():** Inicia o jogo e chama a função jogar().

**Função jogar():** Principal loop do jogo, responsável por gerar operações e avaliar as respostas.

**Funções para Operações Matemáticas:**

somar(): Avalia a operação de soma.

diminuir(): Avalia a operação de subtração.

multiplicar(): Avalia a operação de multiplicação.

**Função mostrarInfo():** Exibe detalhes sobre a operação gerada (opcional).


**4. Detalhamento Técnico**
   
**4.1 Estruturas Utilizadas**

**Struct Calcular:** Armazena as informações relacionadas à operação matemática, como os dois valores a serem operados, o tipo de operação e a dificuldade.

typedef struct { int dificuldade; int valor1; int valor2; int operacao; int resultado; } Calcular;

**4.2 Funções**

**1.jogar():** Gera uma nova operação matemática baseada na dificuldade escolhida pelo jogador, e avalia a resposta fornecida.

**2.somar(), diminuir(), multiplicar():** Funções que executam as operações matemáticas e comparam o resultado fornecido pelo jogador com o resultado correto.

**3.mostrarInfo():** Exibe informações detalhadas sobre a operação (dificuldade, valores, tipo de operação).

**4.3 Aleatoriedade**

Função rand(): Utilizada para gerar valores aleatórios tanto para os números da operação quanto para o tipo de operação (soma, subtração ou multiplicação).
O número da operação é gerado entre 0 e 2, onde:

0 = soma

1 = subtração

2 = multiplicação

**5. Critérios de Avaliação**

**Funcionalidade:** O código atende aos requisitos, permitindo que o jogador jogue de acordo com o sistema de dificuldades e operações (50%).

**Estrutura do Código:** Uso correto de structs, funções e geração de valores aleatórios, além de uma organização modular (20%).

**Tratamento de Entradas:** O código deve lidar com entradas de usuário de forma robusta, garantindo que erros sejam tratados (10%).

**Comentário e Documentação:** O código deve ser comentado e acompanhado de uma explicação clara de seu funcionamento (10%).

**Criatividade:** Possíveis expansões como um sistema de ranking ou novos tipos de operações podem ser adicionadas (10%).

**6. Expansões**
   

**Novas Operações:** Novas operações como divisão


**7. Teste do Sistema**
    
Os estudantes devem testar o sistema com diferentes níveis de dificuldade e operações, para garantir que:

As operações estejam sendo geradas corretamente.

As respostas sejam avaliadas corretamente.

O sistema incremente a pontuação apenas em respostas corretas.

O jogo continue ou encerre corretamente, de acordo com a escolha do jogador.
