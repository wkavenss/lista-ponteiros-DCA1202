#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 3, i, j, aux;
    float *vetor;

    vetor = (float*) malloc(n * sizeof(float));

    for(i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }

    printf("Vetor sem ordenacao: ");

    for(i = 0; i < n; i++){
        printf("%.1f ", vetor[i]);
    }

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\nVetor ordenado: ");

    for(i = 0; i < n; i++){
        printf("%.1f ", vetor[i]);
    }

    free(vetor);
    return 0;
}