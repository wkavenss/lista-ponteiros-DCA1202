#include <stdio.h>

int main(){
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

/* (a) */
valor = 10;
p1 = &valor;
*p1 = 20;
printf("%d \n", valor); // valor = 20

/* (b) */
temp = 26.5;
p2 = &temp;
*p2 = 29.0;
printf("%.1f \n", temp); // valor = 29.0

/* (c) */
p3 = &nome[0];
aux = *p3;
printf("%c \n", aux); // valor = P

/* (d) */
p3 = &nome[4];
aux = *p3;
printf("%c \n", aux); // valor = e

/* (e) */
p3 = nome;
printf("%c \n", *p3); // valor = P

/* (f) */
p3 = p3 + 4;
printf("%c \n", *p3); // valor = e

/* (g) */
p3--;
printf("%c \n", *p3); // valor = t

/* (h) */
vetor[0] = 31;
vetor[1] = 45;
vetor[2] = 27;
p4 = vetor;
idade = *p4;
printf("%d \n", idade); // valor = 31

/* (i) */
p5 = p4 + 1;
idade = *p5;
printf("%d \n", idade); // valor = 45

/* (j) */
p4 = p5 + 1;
idade = *p4;
printf("%d \n", idade); // valor = 27

/* (l) */
p4 = p4 - 2;
idade = *p4;
printf("%d \n", idade); // valor = 31

/* (m) */
p5 = &vetor[2] - 1;
printf("%d \n", *p5); // valor = 45

/* (n) */
p5++;
printf("%d \n", *p5); // valor = 27
return(0);
}