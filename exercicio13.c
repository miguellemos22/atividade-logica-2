#include <stdio.h>


int main() {

    int numero1, numero2;


    printf("Digite o primeiro número inteiro: ");

    scanf("%d", &numero1);


    printf("Digite o segundo número inteiro: ");

    scanf("%d", &numero2);


    if (numero1 > numero2) {

        printf("%d é o maior número e %d é o menor número.\n", numero1, numero2);

    } else if (numero2 > numero1) {

        printf("%d é o maior número e %d é o menor número.\n", numero2, numero1);

    } else {

        printf("Os números são iguais.\n");

    }


    return 0;

}