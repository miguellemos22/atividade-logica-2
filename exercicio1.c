#include <stdio.h>

int main() {
    float temperatura;
    char clima[20];

    // Solicitar a temperatura ao usuário
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura);

    // Verificar a temperatura e definir o clima
    if (temperatura > 25) {
        strcpy(clima, "ensolarado");
    } else if (temperatura < 15) {
        strcpy(clima, "chuvoso");
    } else {
        strcpy(clima, "nublado");
    }

    // Exibir o clima com base na temperatura
    printf("O clima é %s.\n", clima);

    return 0;
}