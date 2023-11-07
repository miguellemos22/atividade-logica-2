#include <stdio.h>


int main() {

    float nota;


    printf("Digite a nota do aluno: ");

    scanf("%f", &nota);


    if (nota >= 9) {

        printf("Classificação: Excelente\n");

    } else if (nota >= 7 && nota < 9) {

        printf("Classificação: Bom\n");

    } else if (nota >= 5 && nota < 7) {

        printf("Classificação: Razoável\n");

    } else {

        printf("Classificação: Insuficiente\n");

    }


    return 0;

}