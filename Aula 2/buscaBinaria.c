#include <stdio.h>

int ordenarLista(int vetor[], int tamanho){
    int aux;
    for (int i = 0; i < tamanho - 1; i++){
        for (int j = 0; j < tamanho - i - 1; j++){
            if (vetor[j] > vetor[j + 1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    return 0; 
}

int buscaBinaria(int vetor[], int tamanho, int chave){
    int esquerda = 0;
    int direita = tamanho - 1;
    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
        if (vetor[meio] == chave) {
            return meio;
        } else if (vetor[meio] < chave) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1; 
}

int main(){
    int vetor[8] = {2, 5, 8, 12, 16, 23, 38, 56};
    int tamanho = 8;
    int chave;

    ordenarLista(vetor, tamanho); 

    printf("Digite a chave para busca: ");
    scanf("%d", &chave);

    int resultado = buscaBinaria(vetor, tamanho, chave);

    if (resultado != -1){
        printf("Chave encontrada no índice %d\n", resultado);
    } else {
        printf("Chave não encontrada\n");
    }

    return 0;
}