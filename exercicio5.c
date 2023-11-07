#include <stdio.h>


int main() {

    int escolha;


    printf("Escolha um idioma de preferência:\n");

    printf("1 - Inglês\n");

    printf("2 - Espanhol\n");

    printf("3 - Francês\n");

    printf("Digite o número correspondente ao idioma: ");

    scanf("%d", &escolha);


    if (escolha == 1) {

        printf("Welcome!\n");

    } else if (escolha == 2) {

        printf("¡Bienvenido!\n");

    } else if (escolha == 3) {

        printf("Bienvenue!\n");

    } else {

        printf("Escolha inválida!\n");

    }


    return 0;

}