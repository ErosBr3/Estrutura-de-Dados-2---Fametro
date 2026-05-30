#include <stdio.h>

// Função que percorre o array e acha o maior e o menor usando ponteiros
void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor) {
    // Inicializa o maior e o menor com o primeiro elemento do array
    *maior = array[0];
    *menor = array[0];

    for(int i = 1; i < tamanho; i++) {
        if(array[i] > *maior) {
            *maior = array[i]; // Atualiza o valor no endereço de 'maior'
        }
        if(array[i] < *menor) {
            *menor = array[i]; // Atualiza o valor no endereço de 'menor'
        }
    }
}

int main() {
    int meuArray[] = {12, 5, 27, 3, 19, 8};
    int tamanho = 6;
    int maiorElemento, menorElemento;

    // Passamos o array e os endereços onde queremos guardar as respostas
    encontrarMaiorMenor(meuArray, tamanho, &maiorElemento, &menorElemento);

    printf("Maior elemento: %d\n", maiorElemento);
    printf("Menor elemento: %d\n", menorElemento);

    return 0;
}