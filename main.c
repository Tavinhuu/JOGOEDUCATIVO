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
    


    printf("Escolha a dificuldade\n");
    printf("Nível 1 (Fácil): Valores entre 0 e 10.\n Nível 2 (Médio): Valores entre 0 e 100.\n Nível 3 (Difícil): Valores entre 0 e 1000.\n Nível 4 (Insano): Valores entre 0 e 10000.\n\n");
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
