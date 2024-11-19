#include <stdio.h>
#include <time.h>

int dificuldade;

int nav;

void jogar(){

    srand(time(NULL));
    int operacao = rand() % 4;


    if(operacao == 0) {
        adicao();
    }

    if (operacao == 1){
        multiplicacao();
    }

    if (operacao == 2){
        divisao();
    }

    if (operacao == 3){
        subtracao();
    }


}

void adicao(){

    if(dificuldade == 1){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|                  ADICAO NIVEL FACIL             |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");

    }
    if(dificuldade == 2){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|                  ADICAO NIVEL MEDIO             |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    if(dificuldade == 3){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|                 ADICAO NIVEL DIFICIL            |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    if(dificuldade == 4){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|                 ADICAO NIVEL INSANO             |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }

}

void multiplicacao(){

    if(dificuldade == 1){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|           MULTIPLICACAO NIVEL FACIL             |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    if(dificuldade == 2){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|           MULTIPLICACAO NIVEL MEDIO             |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    if(dificuldade == 3){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|         MULTIPLICACAO NIVEL DIFICIL             |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    if(dificuldade == 4){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|          MULTIPLICACAO NIVEL INSANO             |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }


}

void divisao(){

    if(dificuldade == 1){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|                 DIVISAO NIVEL FACIL             |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    if(dificuldade == 2){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|                 DIVISAO NIVEL MEDIO             |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    if(dificuldade == 3){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|               DIVISAO NIVEL DIFICIL             |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    if(dificuldade == 4){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|                 DIVISAO NIVEL INSANO            |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
}

void subtracao(){
    
    printf("Operacao de subtracao\n");

    if(dificuldade == 1){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|               SUBTRACAO NIVEL FACIL             |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    if(dificuldade == 2){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|               SUBTRACAO NIVEL MEDIO             |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    if(dificuldade == 3){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|             SUBTRACAO NIVEL DIFICIL             |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    if(dificuldade == 4){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|               SUBTRACAO NIVEL INSANO            |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }

}

void mostrarInfo(){
    
}


int main(void){
    


    printf("\t\t\t _________________________________________________\n");
	printf("\t\t\t|                                                 |\n");
	printf("\t\t\t|               ESCOLHA A DIFICULDADE             |\n");
	printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    printf("\t\t\t| Nivel 1 (Facil): Valores entre 0 e 10.          |\n");
    printf("\t\t\t| Nivel 2 (Facil): Valores entre 0 e 100.         |\n");
    printf("\t\t\t| Nivel 3 (Dificil): Valores entre 0 e 1000.      |\n");
    printf("\t\t\t| Nivel 4 (Insano): Valores entre 0 e 10000.      |\n");
    printf("\t\t\t _________________________________________________\n");
    scanf("%d", &nav);
    switch (nav)
    {
    case 1:
        dificuldade = 1;
        jogar();
        break;
    case 2:
        dificuldade = 2;
        jogar();
        break;
    case 3:
        dificuldade = 3;
        jogar();
        break;
    case 4:
        dificuldade = 4;
        jogar();
        break;
    default:
        break;
    }


}
