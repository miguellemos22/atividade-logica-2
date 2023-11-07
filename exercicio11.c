#include <stdio.h>

#include <stdbool.h>

#include <string.h>


int main() {

    char codigoAcessoCorreto[] = "1234"; // Defina o código de acesso correto

    char codigoAcessoDigitado[100]; // Tamanho máximo do código de acesso


    bool acessoPermitido = false;


    while (!acessoPermitido) {

        printf("Digite o código de acesso: ");

        scanf("%s", codigoAcessoDigitado);


        if (strcmp(codigoAcessoDigitado, codigoAcessoCorreto) == 0) {

            acessoPermitido = true;

            printf("Acesso permitido. Bem-vindo!\n");

        } else {

            printf("Código de acesso incorreto. Tente novamente.\n");

        }

    }


    return 0;

}