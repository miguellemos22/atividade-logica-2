#include <stdio.h>


int main() {

    int opcao;


    printf("Bem-vindo ao jogo!\n");

    printf("Escolha uma opção:\n");

    printf("1 - Novo jogo\n");

    printf("2 - Carregar jogo\n");

    printf("3 - Configurações\n");

    printf("Digite o número correspondente à opção: ");

    scanf("%d", &opcao);


    switch (opcao) {

        case 1:

            printf("Iniciar um novo jogo...\n");

            // Aqui você pode adicionar a lógica para iniciar um novo jogo

            break;

        case 2:

            printf("Carregar jogo existente...\n");

            // Aqui você pode adicionar a lógica para carregar um jogo

            break;

        case 3:

            printf("Acessar configurações...\n");

            // Aqui você pode adicionar a lógica para acessar as configurações do jogo

            break;

        default:

            printf("Opção inválida!\n");

            // Caso o usuário escolha uma opção inválida

            break;

    }


    return 0;

}