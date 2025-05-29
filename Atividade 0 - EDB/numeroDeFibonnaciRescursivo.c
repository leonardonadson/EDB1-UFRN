#include <stdio.h>

int fibonnaci(int n){
    if (n <= 1){
        return n;
    }
    else{
        return fibonnaci(n-1) + fibonnaci(n-2);
    }
}

int main()
{
    int numero;
    scanf("%d", &numero );
    printf("%d", fibonnaci(numero));
    return 0;
}