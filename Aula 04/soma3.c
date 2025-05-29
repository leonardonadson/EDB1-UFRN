#include <stdio.h>
#include <stdbool.h>

/*
// Solução trivial
bool verificaSoma(int array[], int n, int soma) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (array[i] + array[j] + array[k] == soma) {
                    printf("%d + %d + %d = %d\n", array[i], array[j], array[k], soma);
                    return true;
                }
            }
        }
    }
}   
*/

// Busca binária
bool buscaBinaria(int array[], int inicio, int fim, int alvo) {
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        if (array[meio] == alvo) return true;
        if (array[meio] < alvo) inicio = meio + 1;
        else fim = meio - 1;
    }
    return false;
}

// Função otimizada
bool verificaSoma(int array[], int n, int soma) {
    for (int i = 0; i < n; i++) {
        for (int j =0; j < n; j++) {
            int complemento = soma - (array[i] + array[j]);
            if (buscaBinaria(array, 0, n - 1, complemento)) {
                printf("%d + %d + %d = %d\n", array[i], array[j], complemento, soma);
                return true;
            }
        }
    }
    return false;
}

int main() {
    int array[] = {0, 4, 7, 9, 10, 13, 20, 27};

    int n;

    scanf("Digite um número: %d", &n);

    verificaSoma(array, sizeof(array) / sizeof(array[0]), n);
    
    return 0;
}