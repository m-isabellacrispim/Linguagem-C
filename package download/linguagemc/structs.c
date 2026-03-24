#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 30

//sintaxe da struct:
struct jogador{
    char nome[TAM];
    int idade;
    float peso;
};

//define o "struct jogador" para apenas "jogador"
typedef struct jogador jogador;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    //Criando e inicializando
    //define uma variavel pra struct jogador (pes)
    jogador pes1 = {"Bella", 18, 57.4};

    printf("pes1.nome: %s\n", pes1.nome);
    printf("pes1.idade: %d\n", pes1.idade);
    printf("pes1.peso: %.2f\n", pes1.peso);

    //Atribuindo valores aos campos
    pes1.idade = 17;
    pes1.peso = 56.8;
    strcpy(pes1.nome, "Max");

    printf("\nAlterando os campos via código:\n");
    printf("pes.nome: %s\n", pes1.nome);
    printf("pes.idade: %d\n", pes1.idade);
    printf("pes.peso: %.1f\n", pes1.peso);
    
    //Solicitando inserções via teclado
    printf("\nDigite seu nome:\n");
    scanf("%s", pes1.nome);
    printf("Digite sua idade:\n");
    scanf("%d", &pes1.idade);
    printf("Digite seu peso:\n");
    scanf("%f", &pes1.peso);
    
    printf("\nAlterando os campos com dados do usuário:\n");
    printf("pes.nome: %s\n", pes1.nome);
    printf("pes.idade: %d\n", pes1.idade);
    printf("pes.peso: %.1f\n", pes1.peso);

    return 0;
}

