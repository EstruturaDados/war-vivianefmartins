#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// Representa cada território do jogo com:
// - nome (até 30 caracteres)
// - cor do exército (até 10 caracteres)
// - número de tropas
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Vetor de structs com capacidade para armazenar 5 territórios
    struct Territorio territorios[5];

    // Cadastro dos territórios usando um laço for
    for (int i = 0; i < 5; i++) {
        printf("\n#################################\n", i + 1);
        printf("\n--- Cadastro do Territorio %d ---\n", i + 1);
        printf("\n", i + 1);
        

        // Leitura do nome
        printf("Digite o nome do territorio: ");
        scanf(" %[^\n]", territorios[i].nome);  // lê até encontrar ENTER

        // Leitura da cor
        printf("Digite a cor do exercito: ");
        scanf(" %[^\n]", territorios[i].cor);

        // Leitura do número de tropas
        printf("Digite o numero de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados cadastrados
    printf("\n########################################\n");
    printf("\n=== Lista de Territorios Cadastrados ===\n");
    printf("\n########################################\n");
    for (int i = 0; i < 5; i++) {
        printf("\nTERRITORIO %d:\n", i + 1);
        printf(" - Nome: %s\n", territorios[i].nome);
        printf(" - Dominado por: Exercito %s\n", territorios[i].cor);
        printf(" - Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}