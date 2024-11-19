#include <stdio.h>

int dificuldade;

int nav;
   typedef struct{ int dificuldade; int valor1;  int valor2;  int operacao;  int resultado } calcular;

void jogar(){

}

void adicao(){



}

void multiplicacao(){
    
}

void divisao(){
    
}

void subtracao(){
    
}

void mostrarInfo(){
    
}


int main(void){
    


    printf("Escolha a dificuldade\n");
    printf("Nível 1 (Fácil): Valores entre 0 e 10.\n Nível 2 (Médio): Valores entre 0 e 100.\n Nível 3 (Difícil): Valores entre 0 e 1000.\n Nível 4 (Insano): Valores entre 0 e 10000.");
    scanf("%d", &nav);
    switch (nav)
    {
    case 1:
        dificuldade = 1;
        break;
    case 2:
        dificuldade = 2;
        break;
    case 3:
        dificuldade = 3;
        break;
    case 4:
        dificuldade = 4;
        break;
    default:
        break;
    }


}
