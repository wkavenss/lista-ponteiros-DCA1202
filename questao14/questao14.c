#include <stdio.h>
#include <stdlib.h>

int comparar(const void * a, const void * b); // Declaração da função de comparação

int main(){
    int n, i;
    float *vetor;
    srand(time(NULL));
    n = rand();
    vetor = (float*) malloc(n * sizeof(float)); // Alocação dinâmica do vetor

    for(i=0;i<n;i++){ // Preenchendo o vetor com valores aleatórios gerados pela função rand
        vetor[i]=rand();
    }

    qsort(vetor, n, sizeof(float), comparar); // Função qsort que realiza a ordenação do vetor

    printf("\nVetor ordenado: ");

    for(i = 0; i < n; i++){
        printf("%.1f ", vetor[i]); // Impressão do vetor ordenado
    }

    free(vetor); // Liberação da memória alocada anteriormente pela função malloc
    return 0;
}

int comparar(const void * a, const void * b){ // Função de comparação para saber se o retorno é <0, 0 ou >0 e, assim, fazer a ordenação na função qsort
    return (*(int*)a - *(int*)b);
}