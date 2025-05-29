#include <stdio.h>

int buscaDescrescente(int A[], int n, int esquerda, int direita){
    if (direita < esquerda) {
        return -1;
    }

    int meio = (esquerda + direita) / 2;
    if (A[meio] == n) {
        return meio;
    } else if (A[meio] > n) {
        return buscaDescrescente(A, n, meio + 1, direita);
    } else {
        return buscaDescrescente(A, n, esquerda, meio - 1);
    }

}

int sequenciaBitonica(int A[], int n){
    int tamanho = sizeof(A);
    int pico;
    
    for (int i = 0; i < tamanho; i++){
        if (A[i] == n){
            return i;
        }

        if (A[i] > A[i + 1]){
            pico = i;
        }
    }

    int tamanho = sizeof(A) - pico - 1;
    int esquerda = pico + 1;
    int direita = tamanho;

    buscaDescrescente(A, n, esquerda, direita);
    return -1; 
}


int main() {
    int A[] = {0, 2, 4, 6, 8, 10, 9, 7, 5, 3, 1};
    int B[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 100, 90};
    int C[] = {10, 11, 12, 90, 80, 70, 60, 50, 4, 3, 2};
    int n1, n2, n3;

    printf("", sequenciaBitonica(A, n1));
    printf("", sequenciaBitonica(B, n2));
    printf("", sequenciaBitonica(C, n3));

}
