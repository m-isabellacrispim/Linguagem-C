#include <stdio.h>

int main(){
    int i = 1;
    float f = 1.2f;
    char c = 'a';

    int *iptr = &i;
    float *fptr = &f;
    char *cptr = &c;

    printf("%d \n", i);
    printf("%f \n", f);
    printf("%c \n", c);

    *iptr = 2;
    *fptr = 1.3f;
    *cptr = 'b';

    printf("%d \n", i);
    printf("%f \n", f);
    printf("%c \n", c);

    return 0;
}