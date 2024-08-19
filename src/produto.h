#ifndef PRODUTO_H
#define PRODUTO_H

#define MAX_NOME 100
#define MAX_SETOR 50

typedef struct {
    int codigo;
    char nome[MAX_NOME];
    float preco;
    char setor[MAX_SETOR];
} Produto;

int buscarProduto(const char* nomeProduto, Produto* produtoEncontrado);

#endif