#include <stdio.h>
#include <string.h>
#include "produto.h"

#define ARQUIVO_PRODUTOS "produtos.txt"

int buscarProduto(const char* nomeProduto, Produto* produtoEncontrado) {
    FILE *arquivo = fopen(ARQUIVO_PRODUTOS, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de produtos.\n");
        return 0;
    }

    Produto produto;
    while (fscanf(arquivo, "%d %s %f %s", &produto.codigo, produto.nome, &produto.preco, produto.setor) != EOF) {
        if (strcmp(produto.nome, nomeProduto) == 0) {
            *produtoEncontrado = produto;
            fclose(arquivo);
            return 1; // Produto encontrado
        }
    }

    fclose(arquivo);
    return 0; // Produto não encontrado
}