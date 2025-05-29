#include "is_bad_version.h"
#include <stdbool.h>

int bad = 4; // Variável global para armazenar a versão defeituosa
// Simulação da API isBadVersion 
bool isBadVersion(int version) {  // recebe um int e retorna um bool
    return version >= bad; // retorna true se a versão for maior ou igual a bad
} 