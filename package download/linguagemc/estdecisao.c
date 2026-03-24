#include <stdio.h>

int main(){

    float notas;
    
    printf("insira sua nota.\n");
    scanf("%f", &notas);

    //usando if

    if(notas >= 7.0){
        printf("Aprovado(a)!\n");
    }


    /*usando if com operadores logicos 
    && == e
    || == ou
    ! == negaçao */
    if(notas >= 4 && notas < 7){
        printf("Tem direito de faze final!\n");
    }


    // usando if-else
    if(notas >= 7){
        printf("Aprovado(a)!\n");
    }
    else{
        printf("Reprovado(a)!\n");
    }


    // usando switch-case
    int dia;

    printf("insira um numero:\n");
    scanf("%d", &dia);

    switch (dia){
        case 1:
            printf("domingo.\n");
            break;
        case 2:
            printf("segunda.\n");
            break;
        case 3:
            printf("terça.\n");
            break;
        case 4:
            printf("quarta.\n");
            break;
        case 5:
            printf("quinta.\n");
            break;
        case 6:
            printf("sexta.\n");
            break;
        case 7:
            printf("sabado.\n");
            break;
        default:
            printf("nao ha esse dia na semana.\n");
            break;
    }
}
