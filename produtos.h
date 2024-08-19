#ifndef PRODUTOS_H
#define PRODUTOS_H

// Estrutura para armazenar informações sobre um produto
typedef struct {
    int codigo;
    char nome[50];
    float preco;
    char setor[20];
    float desconto;
    int quantidade;
} Produto;

/**
 * Função "inicializarProdutos": Inicializa a lista de produtos com dados pré-definidos.
 * - Esta função preenche o array de produtos com uma lista de produtos típicos de mercado,
 * incluindo informações como código, nome, preço, setor, desconto e quantidade.
 *
 * Parâmetros:
 * produtos  : Array de estruturas Produto a ser preenchido.
 * quantidade: Ponteiro para um inteiro onde será armazenada a quantidade de produtos inicializados.
 */
void inicializarProdutos(Produto produtos[], int *quantidade);

/**
 * Função "buscarproduto": Busca um produto na lista pelo nome.
 * - Esta função realiza uma busca linear na lista de produtos para encontrar um produto pelo seu nome.
 * Se o produto for encontrado, suas informações são copiadas para o produtoEncontrado.
 * 
 * Parâmetros:
 * produtos         : Array de estruturas Produto onde será realizada a busca.
 * quantidade       : Número total de produtos no array.
 * nome             : Nome do produto a ser buscado.
 * produtoEncontrado: Ponteiro para uma estrutura Produto onde serão armazenadas as informações do produto encontrado.
 */
int buscarProduto(Produto produtos[], int quantidade, const char *nome, Produto *produtoEncontrado);

#endif // PRODUTOS_H