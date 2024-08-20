// Define o tamanho máximo do nome do produto
#define MAX_NOME 100

// Define o tamanho máximo do nome do setor
#define MAX_SETOR 50

/**
 Estrutura que representa um produto no sistema.
 
 codigo: Código único do produto.
 nome: Nome do produto (string).
 preco: Preço do produto (valor em ponto flutuante).
 setor: Nome do setor onde o produto está localizado no supermercado.
*/
typedef struct {
    int codigo;
    char nome[MAX_NOME];
    float preco;
    char setor[MAX_SETOR];
} Produto;

/**
 Função que busca um produto pelo nome.

 Parâmetros:
 nomeProduto: Nome do produto a ser buscado (string).
 produtoEncontrado: Ponteiro para a estrutura Produto onde o resultado da busca será armazenado.
 return: Retorna 1 se o produto for encontrado, 0 caso contrário.
*/
int buscarProduto(char* nomeProduto, Produto* produtoEncontrado);