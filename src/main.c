#include <stdio.h>
#include "produto.h"

int main() {
    char nomeProduto[MAX_NOME];
    Produto produtoEncontrado;

    printf("Digite o nome do produto: ");
    scanf("%s", nomeProduto);

    if (buscarProduto(nomeProduto, &produtoEncontrado)) {
        printf("Produto encontrado:\n");
        printf("Código: %d\n", produtoEncontrado.codigo);
        printf("Nome: %s\n", produtoEncontrado.nome);
        printf("Preço: %.2f\n", produtoEncontrado.preco);
        printf("Setor: %s\n", produtoEncontrado.setor);
    } else {
        printf("Produto não cadastrado.\n");
    }

    return 0;
}