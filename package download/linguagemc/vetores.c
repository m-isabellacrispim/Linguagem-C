#include <stdio.h>

int main(){

    int v[5];

    float m;

    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;

    m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    printf("Resultado: %.1f\n", m);

    // mesma coisa so que mais enxuto.

    int vetor[5] = {1, 2, 3, 4, 5};
    int indice;
    float s = 0;

    for(indice=0; indice<5; indice++){
        s += vetor[indice];
    }
    printf("Resultado: %.1f\n", s/5);

    //Peenche vetor atravez do usuario

    int ver[5];
    int ind;

    for(ind=0; ind<5; ind++){
        printf("Insira os dados:\n");
        scanf("%d", &ver[ind]);
    }

    printf("Dados inseridos: %d\n");
    for(ind=0; ind<5; ind++){
        printf("%d ", ver[ind]);
    }

    return 0;
}