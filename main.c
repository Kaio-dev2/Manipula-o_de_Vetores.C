#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM 100 // tamanho máximo do vetor

int main() {
    int vetor[TAM];
    int qtd = 0; // quantidade de números cadastrados
    char opcao;
    int numero, i, j;
    int podeSair = 0; // controla se já listou (D) antes de sair

    while (1) {
        printf("\n===== MENU =====\n");
        printf("A - Cadastrar um novo numero\n");
        printf("B - Buscar um numero\n");
        printf("C - Excluir um numero\n");
        printf("D - Listar os numeros cadastrados\n");
        printf("E - Exibir a soma dos numeros\n");
        printf("F - Sair do sistema\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);
        opcao = toupper(opcao); // deixa maiúsculo para facilitar

        switch (opcao) {
            case 'A':
                if (qtd < TAM) {
                    printf("Digite o numero para cadastrar: ");
                    scanf("%d", &numero);
                    vetor[qtd] = numero;
                    qtd++;
                    printf("Numero cadastrado com sucesso!\n");
                } else {
                    printf("Vetor cheio! Nao e possivel cadastrar mais numeros.\n");
                }
                break;

            case 'B':
                if (qtd == 0) {
                    printf("Nenhum numero cadastrado.\n");
                    break;
                }
                printf("Digite o numero para buscar: ");
                scanf("%d", &numero);
                int encontrado = 0;
                for (i = 0; i < qtd; i++) {
                    if (vetor[i] == numero) {
                        printf("Numero encontrado na posicao %d\n", i);
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado) {
                    printf("Numero nao encontrado.\n");
                }
                break;

            case 'C':
                if (qtd == 0) {
                    printf("Nenhum numero cadastrado.\n");
                    break;
                }
                printf("Digite o numero para excluir: ");
                scanf("%d", &numero);
                encontrado = 0;
                for (i = 0; i < qtd; i++) {
                    if (vetor[i] == numero) {
                        encontrado = 1;
                        // desloca para esquerda
                        for (j = i; j < qtd - 1; j++) {
                            vetor[j] = vetor[j + 1];
                        }
                        vetor[qtd - 1] = 0; // última posição vira zero
                        qtd--;
                        printf("Numero excluido com sucesso.\n");
                        break;
                    }
                }
                if (!encontrado) {
                    printf("Numero nao encontrado.\n");
                }
                break;

            case 'D':
                if (qtd == 0) {
                    printf("Nenhum numero cadastrado.\n");
                } else {
                    printf("Numeros cadastrados: ");
                    for (i = 0; i < qtd; i++) {
                        printf("%d ", vetor[i]);
                    }
                    printf("\n");
                    podeSair = 1; // agora pode sair
                }
                break;

            case 'E':
                if (qtd == 0) {
                    printf("Nenhum numero cadastrado.\n");
                } else {
                    int soma = 0;
                    for (i = 0; i < qtd; i++) {
                        soma += vetor[i];
                    }
                    printf("Soma dos numeros: %d\n", soma);
                }
                break;

            case 'F':
                if (podeSair) {
                    printf("Saindo do sistema...\n");
                    return 0;
                } else {
                    printf("Voce precisa listar os numeros (opcao D) antes de sair.\n");
                }
                break;

            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}
