#include <stdio.h>

int soma(int n){
    if (n == 0) {
        return 0;
    }
    else{
        return n + soma(n-1);;
    }
}

int main()
{
    int numero;
    scanf("%d", &numero );
    printf("%d", soma(numero));
    return 0;
}
