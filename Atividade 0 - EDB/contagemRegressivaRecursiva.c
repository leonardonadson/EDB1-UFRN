#include <stdio.h>

void contagem(int n){
    if (n == 0){
        printf("0");
    }
    else{
        printf("%d\n", n);
        contagem(n - 1);
    }
}

int main()
{
    int numero;
    scanf("%d", &numero );
    contagem(numero);
    return 0;
}