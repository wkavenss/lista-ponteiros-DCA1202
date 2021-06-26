#include <stdio.h>

int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco"); // contador/valor/valor/endereco/endereco

    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i); // i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = 61FF04(f + 0) = 61FF04
        printf("vet[%d] = %.1f",i, vet[i]); // i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = 61FF08(f + 1) = 61FF08
        printf("*(f + %d) = %.1f",i, *(f+i)); // i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = 61FF0C(f + 2) = 61FF0C
        printf("&vet[%d] = %X",i, &vet[i]); // i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = 61FF10(f + 3) = 61FF10
        printf("(f + %d) = %X",i, f+i); // i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = 61FF14(f + 4) = 61FF14
    }
}