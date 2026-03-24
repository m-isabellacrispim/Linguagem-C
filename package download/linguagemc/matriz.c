#include <stdio.h>

int main(){

    int matriz[3][3] = {{1, 2 ,3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    

    printf("Imprimindo a primeira linha da matriz:\n");
    for(j=0; j<3; j++){
    printf("%d ", matriz[0][j]);
    }
    printf("\n\n");
    
    printf("Imprimindo toda a matriz:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("imprimindo a primeira coluna\n");
    for(i=0; i<3; i++){
        printf("%d\n", matriz[i][0]);
    }
   return 0;
}