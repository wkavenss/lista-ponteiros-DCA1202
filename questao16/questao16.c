#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparar_questao14(const void * a, const void * b);
int comparar_questao15(const void * a, const void * b);

int main(){
    int n, i;
    float *vetor_questao14;
    float *vetor_questao15;
    srand(time(NULL));
    n = rand();
    float tempo_questao14, tempo_questao15;
    time_t t_inicio14, t_fim14, t_inicio15, t_fim15;

    t_inicio14 = clock(); //Início da contagem de ciclos para execução da questao 14

    vetor_questao14 = (float*) malloc(n * sizeof(float));

    for(i=0;i<n;i++){
        vetor_questao14[i]=rand(); // Preenchimento do vetor da questao 15 com valores aleatórios gerados pela função rand
    }

    qsort(vetor_questao14, n, sizeof(float), comparar_questao14);

    for(i = 0; i < n; i++){
        printf("%.1f ", vetor_questao14[i]); // Impressão do vetor ordenado
    }

    t_fim14 = clock(); //Fim da contagem de ciclos para execução da questao 14
    tempo_questao14 = (difftime(t_fim14, t_inicio14))/(CLOCKS_PER_SEC/1000);




    t_inicio15 = clock(); //Início da contagem de ciclos para execução da questao 15

    vetor_questao15 = (float*) malloc(n * sizeof(float));

    for(i=0;i<n;i++){
        vetor_questao15[i]=rand(); // Preenchimento do vetor da questao 15 com valores aleatórios gerados pela função rand
    }

    qsort(vetor_questao15, n, sizeof(float), comparar_questao15);

    for(i = 0; i < n; i++){
        printf("%.1f ", vetor_questao15[i]); // Impressão do vetor ordenado
    }
    
    t_fim15 = clock(); //Fim da contagem de ciclos para execução da questao 15
    tempo_questao15 = (difftime(t_fim15, t_inicio15))/(CLOCKS_PER_SEC/1000);

    printf("\nTempo em ms questao 14: %.1f ", tempo_questao14);
    printf("\nTempo em ms questao 15: %.1f ", tempo_questao15);
    free(vetor_questao15);
    free(vetor_questao14);
    return 0;
}

int comparar_questao14(const void * a, const void * b){ // Função de comparação questao 14
    return (*(int*)a - *(int*)b);
}

int comparar_questao15(const void * a, const void * b){ // Nova função de comparação questao 15
    if((*(int*)a) < (*(int*)b)){
        return -1;
    }
    else if((*(int*)a) > (*(int*)b)){
        return 1;
    }
    else{
        return 0;
    }
}

