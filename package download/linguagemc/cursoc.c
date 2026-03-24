#include <stdio.h>
#include <stdlib.h>

#define texto "lindaaaa" //constante, toda vez que escrever texto vai ser substituido por 'lindaaaa'

int main(){

    printf("Hello, World!\n");
    printf("Oi, eu sou bella e estou aprendendo a progamar.\n");  
    printf("Valor inteiro: %d.\n", 10);                      //aprendendo printf
    printf("Valor real: %f.\n", 3.5646);
    printf("Valor real com apenas duas casas: %.2f.\n", 5.5399638539);
    printf("Dado de texto: %c.\n",'b');
    printf("Dado de texto: %s.\n", "testando");

    system("pause");





    int idade = 0;
    float altura = 0;                                        //variáveis
    char nome[50] = "seu nome";


    printf("Digite uma idade:\n");                          //aprendendo "scanf"
    scanf("%d", &idade);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Digite seu nome:\n");
    scanf("%s", &nome);

    printf("Idade informada: %d.\n", idade);
    printf("altura informada: %.2f.\n", altura);
    printf("nome informado: %s.\n", nome);
        
    printf("%s\n", texto);
    system("pause");





    int A, B, soma, subtr, multi, divis;

    printf("digite um numero:");
    scanf("%d", &A);
    printf("digite outro numero:");
    scanf("%d", &B);                                       // aprendendo a realizar calculos
                                                                    
    soma = A + B;
    subtr = A - B;
    multi = A * B;
    divis = A / B;

    printf("A soma foi: %d.\n", soma);
    printf("A subtração foi: %d.\n", subtr);
    printf("A multiplicação foi: %d.\n", multi);
    printf("A divisão foi: %d.\n", divis);
    
    int test = 5;
    printf("teste: %d\n", test);

    test++;
    printf("teste +: %d\n", test);

    test--;
    printf("test-: %d\n", test);                        //incrementos 

    test += 4;
    printf("teste +4: %d\n", test);

    test -= 3;
    printf("teste -3: %d\n", test);

    test *= 10;
    printf("teste x 10: %d\n", test);

    float m;

    printf("insira sua nota:\n");
    scanf("%f", &m);                                    

    if(m  >= 7.0){
        printf("Aprovado(a)!\n");

    }
}