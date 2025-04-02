#include <stdio.h>

int main(){
    int n, i;
    printf("Ingresa un numero natural\n");
    scanf("%d", &n);
    i=1;
    while (1<=n){
        printf("%d\n", i);
        i++;
    }
    return 0;
}