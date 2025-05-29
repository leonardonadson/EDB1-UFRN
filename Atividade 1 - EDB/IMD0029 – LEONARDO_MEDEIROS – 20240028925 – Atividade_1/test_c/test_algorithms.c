#include <stdio.h>
#include "bubble_sort.h"
#include "busca_binaria.h"
#include "busca_seq_ordenada.h"
#include "recursao.h"
#include "conta_especialidades_distintas.h"

#define RUN_TEST(name, expr, expected)                               \
    do {                                                             \
        int result = (expr);                                         \
        printf("%-25s : %s\n", name,                                  \
               (result == (expected)) ? "OK" : "FAIL");              \
    } while(0)

int main() {
    // Vetor para conta_especialidades_distintas
    int arr1[] = {1, 2, 2, 3, 1, 4};
    int n1 = 6;

    // Valor para busca_binaria
    int n2 = 5;

    // String para recursao
    char arr2[]  = "banana";
    char alvo  = 'a';

    //Exemplo de chamada da macro RUN_TEST
    //RUN_TEST("Titulo do teste", nome_da_funcao(entradas da funcao), resposta_esperada);
    RUN_TEST("Busca binaria", busca_binaria(n2), 4);
    RUN_TEST("Busca ordenada", conta_especialidades_distintas(arr1, n1), 4);
    RUN_TEST("Recursao", recursao(arr2, alvo), 3);

    return 0;
}
