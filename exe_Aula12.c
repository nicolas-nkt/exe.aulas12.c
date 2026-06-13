#include <stdio.h>
#include <string.h>

int main () {

    char nome[20];

    printf("Digite o seu primeiro nome: ");
    scanf("%19s", nome);

    strlen(nome);
    printf("Quantidade de letras é: %d\n", strlen(nome));

     for (int i = strlen(nome) - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }

    printf("\n");

    return 0;
}
