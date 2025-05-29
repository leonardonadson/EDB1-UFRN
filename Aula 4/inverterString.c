#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(char str[], int i, int j) {
    if (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        inverter(str, i + 1, j - 1);
    }
}

int main() {
    char str[100];
    
    scanf("%[^\n]", str);

    inverter(str, 0, strlen(str)-1);

    printf("String invertida: %s\n", str);


    return 0;
}