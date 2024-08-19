#include <stdio.h>
#include <string.h>
#include "produtos.h"

int main() {
    Produto produtos[100];
    int quantidade;
    Produto produtoEncontrado;
    
    inicializarProdutos(produtos, &quantidade);
    
    while (1) {
        char nome[50];
        printf("Digite o nome do produto (ou '0' para sair): ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha

        if (strcmp(nome, "0") == 0) {
            break;
        }

        if (buscarProduto(produtos, quantidade, nome, &produtoEncontrado)) {
            printf("Produto encontrado:\n");
            printf("Código: %d\n", produtoEncontrado.codigo);
            printf("Nome: %s\n", produtoEncontrado.nome);
            printf("Preço: R$ %.2f\n", produtoEncontrado.preco);
            printf("Setor: %s\n", produtoEncontrado.setor);
            printf("Desconto: %.2f%%\n", produtoEncontrado.desconto * 100);
            printf("Quantidade disponível: %d\n", produtoEncontrado.quantidade);
        } else {
            printf("Produto não encontrado.\n");
        }
    }

    return 0;
}
