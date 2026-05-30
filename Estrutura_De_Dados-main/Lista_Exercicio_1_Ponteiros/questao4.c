#include <stdio.h>

// Função que dobra o valor da variável original através do ponteiro
void dobrar(int *numero) {
    *numero = (*numero) * 2; 
}

int main() {
    int num = 15;

    printf("Valor original de num: %d\n", num);

    // Passa o endereço de 'num' para a função modificar
    dobrar(&num);

    printf("Valor apos chamar a funcao dobrar: %d\n", num);

    return 0;
}