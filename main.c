#include <stdio.h>
#include <time.h>

#define limpar printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

typedef struct
{
    int dificuldade;
    int valor1;
    int valor2;
    int operacao;
    float resultado;
    float chute;
    int pontuacao;
} Calcular;

Calcular calc1;

int nav;

void jogar()
{

    srand(time(NULL));
    calc1.operacao = rand() % 4;

    if (calc1.operacao == 0)
    {
        adicao();
    }

    if (calc1.operacao == 1)
    {
        multiplicacao();
    }

    if (calc1.operacao == 2)
    {
        divisao();
    }

    if (calc1.operacao == 3)
    {
        subtracao();
    }
}

void adicao()
{
    if (calc1.dificuldade == 1)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 + calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
    if (calc1.dificuldade == 2)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 + calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }

        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
    if (calc1.dificuldade == 3)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 + calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
    if (calc1.dificuldade == 4)
    {

        calc1.resultado = calc1.valor1 + calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
}

void multiplicacao()
{

    if (calc1.dificuldade == 1)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 * calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
    if (calc1.dificuldade == 2)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 * calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
    if (calc1.dificuldade == 3)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 * calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
    if (calc1.dificuldade == 4)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 * calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
}

void divisao()
{

    if (calc1.dificuldade == 1)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 / calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
    if (calc1.dificuldade == 2)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 / calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
    if (calc1.dificuldade == 3)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 / calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
    if (calc1.dificuldade == 4)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 / calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
}

void subtracao()
{

    if (calc1.dificuldade == 1)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 - calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
    if (calc1.dificuldade == 2)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 - calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
    if (calc1.dificuldade == 3)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 - calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
    if (calc1.dificuldade == 4)
    {
        mostrarInfo();

        calc1.resultado = calc1.valor1 - calc1.valor2;

        scanf("%f", &calc1.chute);

        if (calc1.chute == calc1.resultado)
        {
            limpar
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          LEGAL! VOCE ACERTOU                                 |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Voce recebeu +1 ponto\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            calc1.pontuacao += 1;
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
        else
        {
            limpar
            printf("\t\t\t _______________________________________________________________________________\n");
            printf("\t\t\t|                                                                              |\n");
            printf("\t\t\t|                          QUE PENA! VOCE ERROU                                |\n");
            printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
            printf("\t\t\t| Digite 1 para tentar novamente ou qualquer outro valor para voltar ao inicio |\n");
            printf("\t\t\t _______________________________________________________________________________\n");
            scanf(" %d", &nav);
            fflush(stdin);
            if (nav == 1){
                adicao();
            } else {
                main();
            }
        }
    }
}

void mostrarInfo()
{

    if (calc1.dificuldade == 1)
    {
        limpar
        printf("\t\t\t _________________________________________________\n");
        printf("\t\t\t|                                                 |\n");
        printf("\t\t\t|                    NIVEL FACIL                  |\n");
        printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    else if (calc1.dificuldade == 2)
    {
        limpar
        printf("\t\t\t _________________________________________________\n");
        printf("\t\t\t|                                                 |\n");
        printf("\t\t\t|                    NIVEL MEDIO                  |\n");
        printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    else if (calc1.dificuldade == 3)
    {
        limpar
        printf("\t\t\t _________________________________________________\n");
        printf("\t\t\t|                                                 |\n");
        printf("\t\t\t|                  NIVEL DIFICIL                  |\n");
        printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    else
    {   
        limpar
        printf("\t\t\t _________________________________________________\n");
        printf("\t\t\t|                                                 |\n");
        printf("\t\t\t|                  NIVEL INSANO                   |\n");
        printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }

    if (calc1.operacao == 0)
    {
        printf("\t\t\t| Valores: %d + %d                                   \n", calc1.valor1, calc1.valor2);
        printf("\t\t\t| Operacao: Soma                                  |\n");
    }
    else if (calc1.operacao == 1)
    {
        printf("\t\t\t| Valores: %d x %d                                   \n", calc1.valor1, calc1.valor2);
        printf("\t\t\t| Operacao: Multiplicacao                           |\n");
    }
    else if (calc1.operacao == 2)
    {
        printf("\t\t\t| Valores: %d / %d                                   \n", calc1.valor1, calc1.valor2);
        printf("\t\t\t| Operacao: Divisao                                 |\n");
    }
    else if (calc1.operacao == 3)
    {
        printf("\t\t\t| Valores: %d - %d                                   \n", calc1.valor1, calc1.valor2);
        printf("\t\t\t| Operacao: Subtracao                               |\n");
    }
}

int main(void)
{
    limpar
    printf("\t\t\t _________________________________________________\n");
    printf("\t\t\t|                                                 |\n");
    printf("\t\t\t|               ESCOLHA A DIFICULDADE             |\n");
    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    printf("\t\t\t| Pontuacao: %d                                   |\n", calc1.pontuacao);
    printf("\t\t\t| Nivel 1 (Facil): Valores entre 0 e 10.          |\n");
    printf("\t\t\t| Nivel 2 (Médio): Valores entre 0 e 100.         |\n");
    printf("\t\t\t| Nivel 3 (Dificil): Valores entre 0 e 1000.      |\n");
    printf("\t\t\t| Nivel 4 (Insano): Valores entre 0 e 10000.      |\n");
    printf("\t\t\t _________________________________________________\n");
    scanf(" %d", &nav);
            fflush(stdin);
    switch (nav)
    {
    case 1:
        calc1.dificuldade = 1;
        srand(time(NULL));
        calc1.valor1 = rand() % 11;
        calc1.valor2 = rand() % 11;
        jogar();
        break;
    case 2:
        calc1.dificuldade = 2;
        srand(time(NULL));
        calc1.valor1 = rand() % 101;
        calc1.valor2 = rand() % 101;
        jogar();
        break;
    case 3:
        calc1.dificuldade = 3;
        srand(time(NULL));
        calc1.valor1 = rand() % 1001;
        calc1.valor2 = rand() % 1001;
        jogar();
        break;
    case 4:
        calc1.dificuldade = 4;
        srand(time(NULL));
        calc1.valor1 = rand() % 10001;
        calc1.valor2 = rand() % 10001;
        jogar();
        break;
    default:
        break;
    }
}
