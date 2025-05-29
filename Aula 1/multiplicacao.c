#include <stdio.h>

int multiplicacao(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + multiplicacao(a, b-1);
    }
}

int main() {   
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", multiplicacao(a, b));
    return 1;
}