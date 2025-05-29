#include "busca_binaria.h"
#include "is_bad_version.h"

int busca_binaria(int n) {
    int esquerda = 0; // Inicializa a variavel esquerda
    int direita = n; // Define a direita como o maior valor 

    while (esquerda < direita) { 
        int meio = esquerda + (direita - esquerda) / 2; // Define um valor próximo ao centro das versões
        if (isBadVersion(meio)) { // Chama a função isBadVersion passando o meio como parâmetro
            direita = meio; // Se a versão do meio for defeituosa, define a direita como o meio
        } else {
            esquerda = meio + 1; // Se não, sabemos que a versão do meio é boa, então define a esquerda como o meio + 1
        }
    }

    return esquerda; // Como esquerda == direita, retorna uma das duas variáveis, indicando que a versão defeituosa foi encontrada
}
