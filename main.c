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
    printf("Operacao de adicao\n");

    if(dificuldade == 1){
        printf("Dificuldade facil");

    }
    if(dificuldade == 2){
        printf("Dificuldade medio");
    }
    if(dificuldade == 3){
        printf("Dificuldade dificil");
    }
    if(dificuldade == 4){
        printf("Dificuldade insano");
    }

}

void multiplicacao(){
    printf("Operacao de multiplicacao\n");


    if(dificuldade == 1){
        printf("Dificuldade facil");
    }
    if(dificuldade == 2){
        printf("Dificuldade medio");
    }
    if(dificuldade == 3){
        printf("Dificuldade dificil");
    }
    if(dificuldade == 4){
        printf("Dificuldade insano");
    }


}

void divisao(){

    printf("Operacao de divisao\n");

    if(dificuldade == 1){
        printf("Dificuldade facil");
    }
    if(dificuldade == 2){
        printf("Dificuldade medio");
    }
    if(dificuldade == 3){
        printf("Dificuldade dificil");
    }
    if(dificuldade == 4){
        printf("Dificuldade insano");
    }
}

void subtracao(){
    
    printf("Operacao de subtracao\n");

    if(dificuldade == 1){
        printf("Dificuldade facil");
    }
    if(dificuldade == 2){
        printf("Dificuldade medio");
    }
    if(dificuldade == 3){
        printf("Dificuldade dificil");
    }
    if(dificuldade == 4){
        printf("Dificuldade insano");
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
