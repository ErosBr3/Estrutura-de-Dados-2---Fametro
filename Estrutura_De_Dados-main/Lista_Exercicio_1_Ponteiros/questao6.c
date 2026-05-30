#include <stdio.h>
#include <ctype.h> // Usada para a função tolower()

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes) {
    *vogais = 0;
    *consoantes = 0;

    while(*str != '\0') {
        char c = tolower(*str); // Transforma em minúscula para facilitar a checagem

        // Verifica se é uma letra
        if(c >= 'a' && c <= 'z') {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                (*vogais)++;
            } else {
                (*consoantes)++;
            }
        }
        str++; // Avança para o próximo caractere da string
    }
}

int main() {
    char texto[] = "Fametro 2026";
    int totalVogais, totalConsoantes;

    contarVogaisConsoantes(texto, &totalVogais, &totalConsoantes);

    printf("Texto analisado: %s\n", texto);
    printf("Quantidade de vogais: %d\n", totalVogais);
    printf("Quantidade de consoantes: %d\n", totalConsoantes);

    return 0;
}