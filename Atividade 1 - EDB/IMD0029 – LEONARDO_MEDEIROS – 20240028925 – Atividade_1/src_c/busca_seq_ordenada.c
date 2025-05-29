#include "busca_seq_ordenada.h"

int busca_seq_ordenada(int arr[], int n, int alvo) {
     for (int i = 0; i < n; i++){ // Percorre todo o array
        if (arr[i] >= alvo){  // Se o elemento atual for maior ou igual ao alvo
            if (arr[i] == alvo){ // Se o elemento atual for igual ao alvo
                return i; // Retorna o indice
            } else { // Se o elemento atual for diferente que o alvo
                return -1; // Retorna -1 pois ainda não chegou ao alvo
            }
        }
    }
    return -1; // Se chegou ao fim do array sem encontrar o alvo 
}



