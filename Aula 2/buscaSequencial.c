#include <stdio.h>

int buscaSequencial(int vetor[], int tamanho, int chave){
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] == chave){
            return i; 
    }
    return -1; 
    }
}

int main(){
    int vetor[100];
    int tamanho;
    int chave;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("Digite os elementos do vetor: ");
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Digite a chave para busca: ");
    scanf("%d", &chave);

    int resultado = buscaSequencial(vetor, tamanho, chave);

    if (resultado != -1){
        printf("Chave encontrada no índice %d\n", resultado);
    } else {
        printf("Chave não encontrada\n");
    }

    return 0;
}