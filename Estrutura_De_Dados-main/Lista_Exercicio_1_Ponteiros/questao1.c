#include <stdio.h>

// Função que recebe dois ponteiros e troca os valores de lugar
void trocarValores(int *a, int *b) {
    int temp = *a; // Guarda o valor de 'a' na variável temporária
    *a = *b;       // 'a' recebe o valor de 'b'
    *b = temp;     // 'b' recebe o valor guardado na temporária
}

int main() {
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    printf("\nValores originais: num1 = %d, num2 = %d\n", num1, num2);

    // Passamos o endereço das variáveis usando o '&'
    trocarValores(&num1, &num2);

    printf("Valores trocados: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}