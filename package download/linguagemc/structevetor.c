#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    tipo_pessoa lista[TAM];
    int i;

    for(i=0; i<TAM; i++){
        printf("Insira os dados (%d):\n", i+1);
        printf("Nome:\n");
        scanf("%s", &lista[i].nome);
        printf("Idade:\n");
        scanf("%d", lista[i].idade);
        printf("Peso:\n");
        scanf("%f", &lista[i].peso);
    }

    printf("Seus dados:\n");
    for(i=0; i<TAM; i++){
        printf("---------PESSOA %d---------\n", i+1);
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Peso: %.2f\n", lista[i].peso);
        printf("---------------------------\n");

    }

    return 0;
}
