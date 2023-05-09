#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Digite a operação desejada (+, -, *, /): ");
    scanf("%c", &op);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Resultado: %.2f", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Resultado: %.2f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Resultado: %.2f", result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("Resultado: %.2f", result);
            } else {
                printf("Erro: divisão por zero");
            }
            break;
        default:
            printf("Operação inválida");
    }

    return 0;
}
