#include <stdio.h>
#include <time.h>


typedef struct { 
    int dificuldade; 
    int valor1; 
    int valor2; 
    int operacao; 
    int resultado; 
} Calcular;

Calcular calc1;


int nav;

void jogar(){

    srand(time(NULL));
    calc1.operacao = rand() % 4;


    if(calc1.operacao == 0) {
        adicao();
    }

    if (calc1.operacao == 1){
        multiplicacao();
    }

    if (calc1.operacao == 2){
        divisao();
    }

    if (calc1.operacao == 3){
        subtracao();
    }


}

void adicao(){

    if(calc1.dificuldade == 1){
        mostrarInfo();

    }
    if(calc1.dificuldade == 2){
        mostrarInfo();
    }
    if(calc1.dificuldade == 3){
        mostrarInfo();
    }
    if(calc1.dificuldade == 4){
        mostrarInfo();
    }

}

void multiplicacao(){

    if(calc1.dificuldade == 1){
        mostrarInfo();
    }
    if(calc1.dificuldade == 2){
        mostrarInfo();
    }
    if(calc1.dificuldade == 3){
        mostrarInfo();
    }
    if(calc1.dificuldade == 4){
        mostrarInfo();
    }


}

void divisao(){

    if(calc1.dificuldade == 1){
        mostrarInfo();
    }
    if(calc1.dificuldade == 2){
        mostrarInfo();
    }
    if(calc1.dificuldade == 3){
        mostrarInfo();
    }
    if(calc1.dificuldade == 4){
        mostrarInfo();
    }
}

void subtracao(){
    
    printf("Operacao de subtracao\n");

    if(calc1.dificuldade == 1){
        mostrarInfo();
    }
    if(calc1.dificuldade == 2){
        mostrarInfo();
    }
    if(calc1.dificuldade == 3){
        mostrarInfo();
    }
    if(calc1.dificuldade == 4){
        mostrarInfo();
    }

}


void mostrarInfo(){
    
    if(calc1.dificuldade==1){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|                    NIVEL FACIL                  |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    else if(calc1.dificuldade==2){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|                    NIVEL MEDIO                  |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    else if(calc1.dificuldade==3){
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|                  NIVEL DIFICIL                  |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
    else{
        printf("\t\t\t _________________________________________________\n");
	    printf("\t\t\t|                                                 |\n");
	    printf("\t\t\t|                  NIVEL INSANO                   |\n");
	    printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    }
        printf("\t\t\t| Valores:%d %d                                   |\n");

    if(calc1.operacao==1){
        printf("\t\t\t| Operacao: Soma                                  |\n");
    }
    else if(calc1.operacao==2){
        printf("\t\t\t| Operacao: Subtracao                             |\n");
    }
    else if(calc1.operacao==3){
        printf("\t\t\t| Operacao: Multiplicacao                         |\n");
    }
    else{
        printf("\t\t\t| Operacao: Divisao                               |\n");
    }
}


int main(void){
	int operacao;
    


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
        calc1.dificuldade = 1;
        jogar();
        break;
    case 2:
        calc1.dificuldade = 2;
        jogar();
        break;
    case 3:
        calc1.dificuldade = 3;
        jogar();
        break;
    case 4:
        calc1.dificuldade = 4;
        jogar();
        break;
    default:
        break;
    }

int operacao;
    printf("\t\t\t _________________________________________________\n");
	printf("\t\t\t|                                                 |\n");
	printf("\t\t\t|            ESCOLHA A UMA DAS OPERACOES          |\n");
	printf("\t\t\t| - - - - - - - - - - - - - - - - - - - - - - - - |\n");
    printf("SOMA [1]; \n");
    printf("SUBTRACAO [2]; \n");
    printf("MULTIPLICACAO [3]; \n");
     printf("DIVISAO [4]; \n");
     scanf("%d", &operacao);
    switch (operacao)
    {
    case 1:
       adicao(operacao);
    case 2:
        subtracao(operacao);
        break;
    case 3:
  multiplicacao(operacao);      
    break;
       case 4:
  divisao(operacao);      
    break;
    default:
        break;
    }

}
}
