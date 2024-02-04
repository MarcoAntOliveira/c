#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar um item da lista de compras
struct Item {
    char nome[50];
    float preco;
    int quantidade;
};

// Função para adicionar um item à lista de compras
void adicionarItem(struct Item lista[], int *tamanho) {
    if (*tamanho >= 100) {
        printf("A lista de compras está cheia.\n");
        return;
    }

    struct Item novoItem;

    printf("Nome do item: ");
    scanf("%s", novoItem.nome);

    printf("Preco do item: ");
    scanf("%f", &novoItem.preco);

    printf("Quantidade desejada: ");
    scanf("%d", &novoItem.quantidade);

    lista[*tamanho] = novoItem;
    (*tamanho)++;
}

// Função para imprimir a lista de compras
void imprimirLista(struct Item lista[], int tamanho) {
    if (tamanho == 0) {
        printf("A lista de compras está vazia.\n");
        return;
    }

    printf("Lista de Compras:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d. Nome: %s, Preco: %.2f, Quantidade: %d\n",
               i + 1, lista[i].nome, lista[i].preco, lista[i].quantidade);
    }
}
int valor_gasto(struct Item lista[], int tamanho){
    float valor_real = 0; 
    if (tamanho == 0) {
        printf("A lista de compras esta vazia.\n");
        return -1;
    }
    for (int i = 0; i < tamanho; i++){
        valor_real = valor_real + (lista[i].quantidade * lista[i].preco);
    }
    return valor_real;

}

int main() {
    struct Item listaDeCompras[100];
    int tamanho = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar item a lista de compras\n");
        printf("2. Imprimir lista de compras\n");
        printf("3. conferir valor atual lista\n");
        printf("4. sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarItem(listaDeCompras, &tamanho);
                break;
            case 2:
                imprimirLista(listaDeCompras, tamanho);
                break;
            case 3:
                printf("%.3f", valor_gasto(listaDeCompras, tamanho));
                break;
            case 4:
                printf("Saindo do programa.\n");
                break;    
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}
