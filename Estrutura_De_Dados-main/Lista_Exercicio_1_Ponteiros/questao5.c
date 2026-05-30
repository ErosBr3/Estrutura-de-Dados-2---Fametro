#include <stdio.h>

// Função que copia caractere por caractere usando ponteiros
void copiarString(char *origem, char *destino) {
    while(*origem != '\0') { // Enquanto não chegar no fim da string de origem
        *destino = *origem;  // Copia o caractere atual para o destino
        origem++;            // Avança o ponteiro da origem para a próxima letra
        destino++;           // Avança o ponteiro do destino para a próxima letra
    }
    *destino = '\0'; // Adiciona o caractere nulo para fechar a string de destino
}

int main() {
    char textoOriginal[] = "Estrutura de Dados";
    char textoCopia[50]; // Espaço para receber a cópia

    copiarString(textoOriginal, textoCopia);

    printf("String Original: %s\n", textoOriginal);
    printf("String Copiada: %s\n", textoCopia);

    return 0;
}