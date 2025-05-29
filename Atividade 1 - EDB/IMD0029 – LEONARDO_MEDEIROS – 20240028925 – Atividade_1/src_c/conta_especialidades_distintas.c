#include "bubble_sort.h"
#include "busca_seq_ordenada.h"
#include "conta_especialidades_distintas.h"

int conta_especialidades_distintas(int arr[], int n) {
    bubble_sort(arr, n); // Chama a função bubble_sort para ordenar o array
    int distintos[n], count = 0; // Instancia um array para armazenar os elementos distintos e uma variavel para contar os elementos distintos
    for (int i = 0; i < n; i++) { // Percorre o array que foi ordenado
        if (busca_seq_ordenada(distintos, count, arr[i]) == -1) { // Chama a função busca_seq_ordenada para verificar se o elemento do indice atual ja foi adicionado ao array
            distintos[count++] = arr[i]; // Se o elemento nao foi adicionado, adiciona-o ao array e incrementa o contador
        }
    }
    return count; // Retorna o numero de elementos distintos
}
