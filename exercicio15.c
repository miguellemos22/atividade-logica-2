#include <stdio.h>

int main() {

    int opcao;

    double valor, resultado;

    while (1) {

        printf("Escolha uma opção de conversão:\n");

        printf("1 - Quilômetros para Milhas\n");

        printf("2 - Celsius para Fahrenheit\n");

        printf("0 - Sair do programa\n");

        printf("Digite a opção: ");

        scanf("%d", &opcao);

        if (opcao == 0) {

            printf("Programa encerrado.\n");

            break;

        }

        switch (opcao) {

            case 1:

                printf("Digite o valor em quilômetros: ");

                scanf("%lf", &valor);

                resultado = valor * 0.621371;

                printf("%.2lf quilômetros é igual a %.2lf milhas.\n", valor, resultado);

                break;

            case 2:

                printf("Digite a temperatura em graus Celsius: ");

                scanf("%lf", &valor);

                resultado = (valor * 9/5) + 32;

                printf("%.2lf graus Celsius é igual a %.2lf graus Fahrenheit.\n", valor, resultado);

                break;

            default:

                printf("Opção inválida. Tente novamente.\n");

        }

    }

    return 0;

}