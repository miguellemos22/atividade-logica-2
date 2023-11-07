#include <stdio.h>


int main() {

    int codigo;


    printf("Escolha um produto:\n");

    printf("1 - Camiseta\n");

    printf("2 - Calça\n");

    printf("3 - Sapato\n");

    printf("Digite o código do produto: ");

    scanf("%d", &codigo);


    if (codigo == 1) {

        printf("Produto selecionado: Camiseta\n");

        printf("Preço: R$ 29.99\n");

    } else if (codigo == 2) {

        printf("Produto selecionado: Calça\n");

        printf("Preço: R$ 49.99\n");

    } else if (codigo == 3) {

        printf("Produto selecionado: Sapato\n");

        printf("Preço: R$ 79.99\n");

    } else {

        printf("Código de produto inválido!\n");

    }


    return 0;

}