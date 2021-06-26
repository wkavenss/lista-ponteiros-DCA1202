#include <stdio.h>

int main(void){
    int mat[4];
    int *p, x, i;
    p = mat;

    for(i=0; i<4; i++){
        mat[i] = i + 1;
    }

    for(i=0; i<4; i++){
        printf("%d, ", mat[i]);
    }

    p = mat + 1;
    printf("\n");
    printf("%d", p); // Válida. Imprime o endereço de memória do vetor da posição seguinte.

    /*p = mat++;
    printf("\n");
    printf("%d", p);*/ // Inválida. O comando de incremento não é válido nesta situação.

    /*p = ++mat;
    printf("\n");
    printf("%d", *p);*/ // Inválida. O comando de incremento não é válido nesta situação.

    x = (*mat)++;
    printf("\n");
    printf("%d", x); // Válida. A variável 'x' recebe o conteúdo da variável 'mat' mais 1.
}