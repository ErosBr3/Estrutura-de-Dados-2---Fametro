#include <stdio.h>

// Função que inverte a string alterando a original (in-place)
void inverterString(char *str) {
    char *inicio = str;
    char *fim = str;
    char temp;

    // Encontra o fim da string (antes do '\0')
    while(*fim != '\0') {
        fim++;
    }
    fim--; // Volta uma posição para ignorar o caractere nulo '\0'

    // Troca os caracteres das pontas até os ponteiros se cruzarem
    while(inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++; // Move para frente
        fim--;    // Move para trás
    }
}

int main() {
    char palavra[] = "brasil";

    printf("Palavra original: %s\n", palavra);

    inverterString(palavra);

    printf("Palavra invertida: %s\n", palavra);

    return 0;
}