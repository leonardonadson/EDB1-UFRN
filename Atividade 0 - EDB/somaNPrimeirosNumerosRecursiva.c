#include <stdio.h>

int soma(int n){
    if (n > 0) {
        int n1 = n + soma(n-1);
        return n1;
    }
    else{
        return n;
    }
}

int main()
{
    int numero;
    scanf("%d", &numero );
    printf("%d", soma(numero));
    return 0;
}