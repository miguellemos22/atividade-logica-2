#include <stdio.h>


int main() {

    double num1, num2, resultado;

    char operacao;


    printf("Digite o primeiro número: ");

    scanf("%lf", &num1);

    printf("Digite o segundo número: ");

    scanf("%lf", &num2);


    printf("Escolha a operação matemática (+ ou -): ");

    scanf(" %c", &operacao);


    switch (operacao) {

        case '+':

            resultado = num1 + num2;

            printf("Resultado: %.2lf\n", resultado);

            break;

        case '-':

            resultado = num1 - num2;

            printf("Resultado: %.2lf\n", resultado);

            break;

        default:

            printf("Operação inválida.\n");

            break;

    }


    return 0;

}