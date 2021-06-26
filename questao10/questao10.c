#include <stdio.h>

int main(){
    char x[4];
    int i;
    printf("char = ");
    for(i=0; i<=3; i++){
        printf("%d ", &x[i]); // char = 6422296 6422297 6422298 6422299
                              // Igual ao idealizado anteriormente
    }

    printf("\n");

    int y[4];
    printf("int = ");
    for(i=0; i<=3; i++){
        printf("%d ", &y[i]); // int = 6422280 6422284 6422288 6422292
                              // Diferente do idealizado, pois aqui na prática avançou de 4 em 4
    }

    printf("\n");

    int z[4];
    printf("float = ");
    for(i=0; i<=3; i++){
        printf("%d ", &z[i]); // float = 6422264 6422268 6422272 6422276
                              // Igual ao idealizado anteriormente
    }

    printf("\n");

    double w[4];
    printf("double = ");
    for(i=0; i<=3; i++){
        printf("%d ", &w[i]); // double = 6422232 6422240 6422248 6422256
                              // Igual ao idealizado anteriormente
    }
}