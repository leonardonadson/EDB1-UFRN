#include "bubble_sort.h"

int bubble_sort(int vetor[], int tamanho){ 
    int aux; // Variável auxiliar
    for (int i = 0; i < tamanho - 1; i++){ // Percorre de `0` até `tamanho - 1`. Cada iteração representa uma passagem completa pelo vetor.  
        for (int j = 0; j < tamanho - i - 1; j++){ // Em cada iteração do loop externo, percorre de `0` até `tamanho - i - 1` a cada passagem. Esta otimização serve pois os elementos após `tamanho - i - 1` já estão ordenados pela natureza do bubble sort.  
            if (vetor[j] > vetor[j + 1]){ // Compara o tamanho do elemento atual com o próximo elemento.
                aux = vetor[j]; // Atribui o valor do elemento atual ao auxiliar.
                vetor[j] = vetor[j + 1]; // Atribui o valor do elemento seguinte ao atual.
                vetor[j + 1] = aux; // Atribui o valor do auxiliar ao elemento seguinte.
            }
        }
    }
    return 0; 
}
