#include <stdio.h>

int main(void){
    int i = 5, *p;
    p = &i;

    printf("%x \n", p); // 4096
    printf("%d \n", *p+2); // 7
    printf("%d \n", **&p); // 5
    printf("%d \n", 3**p); // 15
    printf("%d \n", **&p+4); // 9
}