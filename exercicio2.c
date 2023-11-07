#include <stdio.h>


int main() {

    float valorCompra;

    int diaSemana;

    

    printf("Digite o valor da compra: ");

    scanf("%f", &valorCompra);

    

    printf("Digite o dia da semana (1 para segunda, 2 para terça, ..., 7 para domingo): ");

    scanf("%d", &diaSemana);

    

    float desconto = 0.0;

    

    if (valorCompra > 100.0) {

        if (diaSemana >= 1 && diaSemana <= 5) { // Dias de semana (segunda a sexta)

            desconto = valorCompra * 0.10; // 10% de desconto

        } else if (diaSemana >= 6 && diaSemana <= 7) { // Fim de semana (sábado e domingo)

            desconto = valorCompra * 0.15; // 15% de desconto

        }

    }

    

    float valorTotal = valorCompra - desconto;

    

    printf("O valor total da compra com desconto é: R$%.2f\n", valorTotal);

    

    return 0;

}