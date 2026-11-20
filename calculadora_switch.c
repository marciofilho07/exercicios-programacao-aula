#include <stdio.h>

int main(void) {
    float numero1;
    float numero2;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    switch (operacao) {
        case '*':
            if (numero2 != 0) {
                printf("Resultado: %.2f\n", numero1 * numero2);
            } else {
                printf("Sua conta deu erro, pare de multiplicar por zero.\n");
            }
            break;
    }

    return 0;
}
