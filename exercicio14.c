#include <stdio.h>


int main() {

    int numero, totalNumeros, somaPares = 0, somaImpares = 0;

    int totalPares = 0, totalImpares = 0;


    printf("Digite a quantidade de números: ");

    scanf("%d", &totalNumeros);


    if (totalNumeros <= 0) {

        printf("Quantidade inválida de números.\n");

        return 1;

    }


    for (int i = 1; i <= totalNumeros; i++) {

        printf("Digite o número %d: ", i);

        scanf("%d", &numero);


        if (numero % 2 == 0) { // Verifica se o número é par

            totalPares++;

            somaPares += numero;

        } else {

            totalImpares++;

            somaImpares += numero;

        }

    }


    printf("Total de números pares: %d\n", totalPares);

    printf("Total de números ímpares: %d\n", totalImpares);


    if (totalPares > 0) {

        double mediaPares = (double)somaPares / totalPares;

        printf("Média dos números pares: %.2lf\n", mediaPares);

    } else {

        printf("Não há números