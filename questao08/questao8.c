#include <stdio.h>

int main(){
    int vet[] = {4,9,13};
    int i;

    for(i=0;i<3;i++){
        printf("%d ",*(vet+i)); // O (vet+i) irá retornar o endereço de cada elemento, após isso, o * retornará o valor localizado nesses endereços e, assim, imprime os valores 4, 9 e 13.
    }

    /*int vet[] = {4,9,13};
    int i;*/
    for(i=0;i<3;i++){
        printf("%X ", vet+i); // O vet+i irá retornar o endereço de cada elemento no formato hexadecimal.
    }
}