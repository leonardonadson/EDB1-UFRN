#include <stdio.h>

char inversao(char palavra[100], int i) {
    if (sizeof(palavra) <= 1) {
        return palavra[0];
    }
    else{
        return palavra[sizeof(palavra) - 1] + inversao(palavra, sizeof(palavra) - 1);
    }
}

int main() {
    char palavra[100];
    scanf("%[^\n]", palavra);
    printf("%s", inversao(palavra, sizeof(palavra)));
    return 0;
}
