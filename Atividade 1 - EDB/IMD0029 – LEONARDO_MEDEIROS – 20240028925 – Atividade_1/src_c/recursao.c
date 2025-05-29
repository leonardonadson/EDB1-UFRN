#include "recursao.h"

int recursao(const char *str, char alvo) {
    if (*str == '\0') {  // Caso base verificando se a string chegou ao fim ou é vazia
        return 0;
    }

    int count = 0;
    if (*str == alvo) { // Se o caractere atual for igual ao alvo
        count = 1; // Incrementa o contador
    }
    return count + recursao(str + 1, alvo); // Chama a funcao recursivamente para o restante da string
}

