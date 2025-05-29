#include <stdio.h>
#include <time.h>

void exemplo() {
    for (int i = 0; i < 100000000; i++) {
        
    }
}

int main() {
    clock_t inicio = clock(); 

    exemplo(); 

    clock_t fim = clock(); 

    double tempo_execucao = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Tempo de execução: %.6f segundos\n", tempo_execucao);

    return 0;
}