#include <stdio.h>

int main(void){
    int pulo[5] = {1,2,3,4,5};
    printf("%d", *(pulo + 2)); // valor = 3
                               // a expressão que faz referência ao terceiro valor é *(pulo + 2)
}