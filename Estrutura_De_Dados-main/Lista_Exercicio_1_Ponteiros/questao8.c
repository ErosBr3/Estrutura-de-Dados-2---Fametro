#include <stdio.h>

// Função calculadora que armazena os resultados nos ponteiros correspondentes
void calculadora(float n1, float n2, float *soma, float *sub, float *mult, float *div) {
    *soma = n1 + n2;
    *sub = n1 - n2;
    *mult = n1 * n2;
    
    // Evita a divisão por zero
    if(n2 != 0) {
        *div = n1 / n2;
    } else {
        *div = 0; // Define 0 se não for possível dividir
    }
}

int main() {
    float num1 = 10.5;
    float num2 = 2.5;
    float rSoma, rSub, rMult, rDiv;

    calculadora(num1, num2, &rSoma, &rSub, &rMult, &rDiv);

    printf("Numeros: %.2f e %.2f\n", num1, num2);
    printf("Soma: %.2f\n", rSoma);
    printf("Subtracao: %.2f\n", rSub);
    printf("Multiplicacao: %.2f\n", rMult);
    printf("Divisao: %.2f\n", rDiv);

    return 0;
}