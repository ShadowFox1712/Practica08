#include <stdio.h>

int main(){
    int n, i;
    printf("Ingresa un numero natural\n");
    scanf("%d", &n);
    i=1;

    do{
        printf("%d\n", i);
        i++;
    }while(1<=n);

    return 0;
}