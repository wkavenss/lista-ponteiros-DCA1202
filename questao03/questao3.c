#include <stdio.h>

int main(void){
    int i, j;
    int *p, *q;
    p = i; // Legal
    q = &j; // Legal
    p = &*&i; // Legal
    //i = (*&)j; // Ilegal
    i = *&j; // Legal
    i = *&*&j; // Legal
    //q = *p; // Ilegal
    i = (*p)++ + *q; // Legal
}