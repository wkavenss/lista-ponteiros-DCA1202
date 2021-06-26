#include <stdio.h>

int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i = 3;

    aloha[2] = value;
    printf("%f", aloha[2]); // Válido

    scanf("%f", &aloha); // Válido

    //aloha = value"; // Inválido

    printf("%f", aloha); // Válido

    coisas[4][4] = aloha[3]; // Válido

    //coisas[5] = aloha; // Inválido, pois a variável 'coisas' é uma matriz

    //pf = value; // Inválido, pois 'pf' é um ponteiro

    pf = aloha; // Válido
}