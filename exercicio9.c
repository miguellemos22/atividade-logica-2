#include <stdio.h>

#include <stdbool.h>


int main() {

    int numero;

    bool ehPrimo = true;


    printf("Digite um número inteiro: ");

    scanf("%d", &numero);


    if (numero <= 1) {

        ehPrimo = false;

    } else {

        for (int i = 2; i <= numero / 2; i++) {

            if (numero % i == 0) {

                ehPrimo = false;

                break;

            }

        }

    }


    if (ehPrimo) {

        printf("Número primo\n");

    } else {

        printf("Número não primo\n");

    }


    return 0;

}