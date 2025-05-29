#include <stdio.h>
#include <string.h>

void converterBinario(int n, char binario[], int i) {
    if (n > 0) {
        int bit = n % 2;
        binario[i] = bit + '0';
        return converterBinario(n / 2, binario, i + 1);
    }
    return;
}

void inverterBinario(char binario[], int i, int j) {
    if (i < j) {
        char temp = binario[i];
        binario[i] = binario[j];
        binario[j] = temp;
        inverterBinario(binario, i + 1, j - 1);
    }
}


int main() {
    int n, i = 0;
    char binario[20];

    printf("Digite um número: ");
    scanf("%d", &n);

    converterBinario(n, binario, i);
    inverterBinario(binario, 0, strlen(binario) - 1);

    printf("Binário: %s\n", binario);    

    return 0;
}
