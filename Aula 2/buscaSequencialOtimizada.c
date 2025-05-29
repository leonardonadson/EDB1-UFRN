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

int buscaSequencial(int vetor[], int tamanho, int chave){
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] <= chave){ 
            if (vetor[i] == chave){
                return i;
            } 
        }
        else {
            return -1; 
        }
    }
    return -1; 
}

int main(){
    int vetor[6] = {14,16,15,13,18,17};
    int tamanho = 6;
    int chave;

    ordenarLista(vetor, tamanho); 

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