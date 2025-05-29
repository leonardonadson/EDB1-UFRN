#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("Fatorial de %d é %d", n, fatorial(n));
    return 0;
}