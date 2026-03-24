#include <stdio.h>
int main(){

    int i=1;

    //usando while
    while (i <= 10){

        printf("%d\n", i);
        i++;

    }

    //usando do-while

    int b=1;
     do{
        printf("%d\n ", b);
        b++;
    } while (b <= 10);

    //usando for
    int c;
    for(c=1; c<=10; c++){

        printf("%d ", c);
    }
}   

    
