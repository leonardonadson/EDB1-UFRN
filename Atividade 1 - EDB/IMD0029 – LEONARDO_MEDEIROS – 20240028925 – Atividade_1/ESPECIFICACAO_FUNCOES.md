# Especificação das Funções 

## Função: bubble_sort  
### Arquivo: `bubble_sort.h` e `bubble_sort.c`  

### Funcionamento: 
- Implementa o algoritmo **Bubble Sort** para ordenar um array de inteiros em ordem crescente.  
- Recebe como parâmetros um vetor de inteiros e seu tamanho.  
- Declara uma variável auxiliar `aux` para facilitar a troca de valores entre elementos do vetor.  
- Utiliza dois loops aninhados:
  - **Loop externo:** Percorre de `0` até `tamanho - 1`. Cada iteração representa uma passagem completa pelo vetor.  
  - **Loop interno:** Em cada iteração do loop externo, percorre de `0` até `tamanho - i - 1` a cada passagem. Esta otimização serve pois os elementos após `tamanho - i - 1` já estão ordenados.  
- Em cada iteração do loop interno, compara o elemento atual com o próximo elemento Se o vetor analisado for maior que o vetor seguido dele,  realiza a troca utilizando a variavel auxiliar.
- Este processo repete-se até que todas as trocas necessárias sejam realizadas, garantindo que o vetor esteja totalmente ordenado.  
  
### Parâmetros:  
- `int vetor[]`: Array de inteiros a ser ordenado.  
- `int tamanho`: Número de elementos no array.  

### Retorno:  
- Sempre retorna `0`, indicando o término da execução. O resultado é refletido diretamente no vetor original (ordenação in-place).  

---

## **Função: `busca_binaria`**  
### Arquivo: `busca_binaria.h` e `busca_binaria.c`  

### **Funcionamento**  
- Encontra a primeira versão com problemas em uma sequência de versões numeradas de `1` a `n`, utilizando **busca binária**.  
- Recebe como parâmetro um número inteiro `n` (última versão).  
- Utiliza um loop `while` para iterar até encontrar a versão defeituosa.  
- Calcula um elemento central (`meio = esquerda + (direita - esquerda) / 2`) e verifica se é defeituoso usando `isBadVersion(meio)`:  
  - Se **sim**, a versão defeituosa está **em `meio` ou antes** → `direita = meio`.  
  - Se **não**, a versão defeituosa está **após `meio`** → `esquerda = meio + 1`.  
- Repete até `esquerda == direita`, indicando que a versão defeituosa foi encontrada.  

### Parâmetros  
- `int n`: Número da última versão lançada.  

### Retorno  
- Número da **primeira versão ruim**.  

### **Diferença para Busca Binária Tradicional**  
Diferencia-se por **não usar um vetor ordenado explicitamente**, trabalhando com **números inteiros** (versões de `1` a `n`, já ordenadas implicitamente), e por buscar o primeiro ponto onde uma condição (`isBadVersion()`) retorna o valor das condições.

---

## Função: `busca_seq_ordenada`  
### Arquivo: `busca_seq_ordenada.h` e `busca_seq_ordenada.c`  

### Funcionamento:  
Realiza uma **busca sequencial otimizada** em um array **já ordenado**.  
- Percorre o array do início ao fim.  
- Se encontrar um elemento igual ao alvo (`arr[i] == alvo`), retorna seu índice imediatamente.  
- Se encontrar um elemento maior que o alvo (`arr[i] > alvo`), interrompe a busca e retorna `-1`.
- O algoritmo aproveita da ordenação do array e otimiza que se o item atual analisado for maior que o alvo, logo não existe o alvo no vetor.  

### Parâmetros:  
- `int arr[]`: Array de inteiros **ordenado**.  
- `int n`: Tamanho do array.  
- `int alvo`: Valor a ser buscado.  

### Retorno:  
- Índice do alvo se encontrado (`0` a `n-1`).  
- `-1` se não encontrado ou se o array não estiver ordenado.  

---

## **Função: `conta_especialidades_distintas`**  
### Arquivo: `conta_especialidades_distintas.h` e `conta_especialidades_distintas.c`  

### Funcionamento:  
Conta quantos elementos **distintos** existem em um array de inteiros.  
1. **Ordena o array** usando a função `bubble_sort`.
2. Cria um array auxiliar (`distintos[]`) para armazenar elementos únicos.  
3. Para cada elemento do array original:  
   - Verifica se o elemento já está em `distintos[]` usando `busca_seq_ordenada`.  
   - Se não estiver, adiciona-o a `distintos[]` e incrementa o contador.  

### Parâmetros:  
- `int arr[]`: Array de inteiros.  
- `int n`: Tamanho do array.  

### Retorno:  
- Número de elementos distintos no array.  

---

## Função: `isBadVersion`  
### Arquivo: `is_bad_version.h` e `is_bad_version.c`  

### Funcionamento:  
Simula uma API externa que verifica se uma versão específica é "ruim".  
- Compara a versão fornecida com uma variável global `bad`.  
- Retorna `true` se `version >= bad`.  ,
- A variável global `bad` deve ser definida antes do uso (exemplo: `bad = 4`).

### Parâmetros:  
- `int version`: Número da versão a ser verificada.  

### Retorno:  
- `true` (versão defeituosa) ou `false` (versão ok).  

---

## Função: `recursao`  
### Arquivo: `recursao.h` e `recursao.c`  

### Funcionamento:  
Conta ocorrências de um caractere (`alvo`) em uma string (`str`) usando **recursão**.  
- Caso base: Se a string estiver vazia (`*str == '\0'`), retorna `0`.  
- Passo recursivo:  
  - Verifica se o caractere atual (`*str`) é igual ao `alvo`.  
  - Chama a função recursivamente para o restante da string (`str + 1`).  
  - Soma `1` ao total se o caractere atual for o `alvo`.  

### Parâmetros:  
- `const char *str`: Vetor de `char` com a palavra a ser analisada .  
- `char alvo`: Caractere a ser contado na palavra.  

### Retorno:  
- Número de ocorrências de `alvo` na `str`.  

---