#include <stdio.h>


int main() {

    int quantidadeNotas;

    double nota, soma = 0;


    printf("Digite a quantidade de notas: ");

    scanf("%d", &quantidadeNotas);


    if (quantidadeNotas <= 0) {

        printf("Quantidade inválida de notas.\n");

        return 1;

    }


    for (int i = 1; i <= quantidadeNotas; i++) {

        printf("Digite a nota %d: ", i);

        scanf("%lf", &nota);

        soma += nota;

    }


    double media = soma / quantidadeNotas;

    printf("A média das notas é: %.2lf\n", media);


    return 0;

}