#include <stdio.h>


int main() {

    int numero;


    printf("Digite um número inteiro positivo: ");

    scanf("%d", &numero);


    if (numero < 0) {

        printf("Número inválido. Deve ser positivo.\n");

        return 1;

    }


    printf("Contagem regressiva a partir de %d:\n", numero);


    while (numero >= 0) {

        switch (numero) {

            case 0:

                printf("Zero - Fim da contagem.\n");

                break;

            case 1:

                printf("Um - Próximo número: 0\n");

                break;

            default:

                printf("%d - Próximo número: %d\n", numero, numero - 1);

                break;

        }

        numero--;

    }


    return 0;

}