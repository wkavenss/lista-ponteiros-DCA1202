#include <stdio.h>
#include <stdlib.h>

int somar_vetores(int *vetor1, int *vetor2, int *vetor_soma, int n);

int main(){
    int n, i;
    int *vetor1, *vetor2, *vetor_soma;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    vetor1 = (int*) malloc(n * sizeof(int));
    vetor2 = (int*) malloc(n * sizeof(int));
    vetor_soma = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n; i++){
        printf("Insira o numero da posicao %d do vetor 1: ", i);
        scanf("%d", &vetor1[i]);
    }
    for (i = 0; i < n; i++){
        printf("Insira o numero da posicao %d do vetor 2: ", i);
        scanf("%d", &vetor2[i]);
    }

    somar_vetores(vetor1, vetor2, vetor_soma, n);

    for(i = 0; i < n; i++){
        printf("%d ", vetor_soma[i]);
    }

    free(vetor_soma);
    free(vetor2);
    free(vetor1);
    
    return 0;
}

int somar_vetores(int *vetor1, int *vetor2, int *vetor_soma, int n){
    for(int i = 0; i < n; i++){
        vetor_soma[i] = vetor1[i] + vetor2[i];
    }
    return vetor_soma;
}