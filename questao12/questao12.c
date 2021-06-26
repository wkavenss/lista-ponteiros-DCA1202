#include <stdio.h>
#include <stdlib.h>

// Um ponteiro para função trabalha armazenando informação do endereço onde as funções ficam localizadas na memória virtual

int divisao(int x, int y);

int main(){
    int num1, num2, resultado;
    int (*pf)(int, int) = &divisao;
    printf("Digite dois numeros para efetuar a divisao entre eles: ");
    scanf("%d %d", &num1, &num2);
    resultado = pf(num1, num2);
    printf("Resultado da divisao = %d\n", resultado);
    return 0;
}

int divisao(int x, int y){
    return (x / y);
}