#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ehAnoBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int ordenarLista(int vetor[], int tamanho){
    int aux;
    for (int i = 0; i < tamanho - 1; i++){
        for (int j = 0; j < tamanho - i - 1; j++){
            if (vetor[j] < vetor[j + 1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    return 0;
}

int buscaSequencial(int *vetor, int tamanho, int chave) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == chave) return i;
    }
    return -1;
}

int buscaBinaria(int *vetor, int tamanho, int chave) {
    int inicio = 0, fim = tamanho - 1, meio;
    while (inicio <= fim) {
        meio = inicio + (fim - inicio) / 2;
        if (vetor[meio] == chave) return meio;
        else if (vetor[meio] > chave) inicio = meio + 1;
        else fim = meio - 1;
    }
    return -1;
}

int main() {
    int anos[] = {2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023, 2024, 1996, 1992, 1988, 1980, 1976, 2028, 2032};
    int tamanho = sizeof(anos) / sizeof(anos[0]);
    int anoUsuario;
    clock_t tempo_inicio, tempo_fim;
    double tempo_execucao;
    int indiceEncontrado;
    int anoAlvoBissexto;

    ordenarLista(anos, tamanho);

    printf("Digite o ano: ");
    scanf("%d", &anoUsuario);

    anoAlvoBissexto = anoUsuario + 1;
    while (!ehAnoBissexto(anoAlvoBissexto)) {
        anoAlvoBissexto++;
    }
    printf("O primeiro ano bissexto apos %d é: %d.", anoUsuario, anoAlvoBissexto);


    printf("\n Buscando o ano bissexto na lista de anos cadastrados...\n");
    tempo_inicio = clock();
    indiceEncontrado = buscaSequencial(anos, tamanho, anoAlvoBissexto);
    tempo_fim = clock();
    tempo_execucao = ((double)(tempo_fim - tempo_inicio)) / CLOCKS_PER_SEC;
    printf("Busca Sequencial:\n");
    if (indiceEncontrado != -1) {
        printf("Ano %d encontrado no indice %d.\n", anoAlvoBissexto, indiceEncontrado);
    } else {
        printf("Ano %d NAO encontrado.\n", anoAlvoBissexto);
    }
    printf("Tempo de execucao: %.10f segundos\n\n", tempo_execucao);

    tempo_inicio = clock();
    indiceEncontrado = buscaBinaria(anos, tamanho, anoAlvoBissexto);
    tempo_fim = clock();
    tempo_execucao = ((double)(tempo_fim - tempo_inicio)) / CLOCKS_PER_SEC;
    printf("Busca Binaria:\n");
    if (indiceEncontrado != -1) {
        printf("Ano %d encontrado no indice %d.\n", anoAlvoBissexto, indiceEncontrado);
    } else {
        printf("Ano %d NAO encontrado.\n", anoAlvoBissexto);
    }
    printf("Tempo de execucao: %.10f segundos\n\n", tempo_execucao);

    return 0;
}