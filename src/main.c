#include <stdio.h>
#include <time.h>
#include "produto.h"

int main() {
    char nomeProduto[MAX_NOME];
    Produto produtoEncontrado;
    clock_t inicio, fim;
    double tempo_execucao;

    printf("Digite o nome do produto: ");
    scanf("%s", nomeProduto);

    // Inicia a medição de tempo
    inicio = clock();

    if (buscarProduto(nomeProduto, &produtoEncontrado)) {
        printf("+-----------------------------+\n");
        printf("| Produto encontrado:         |\n");
        printf("+-----------------------------+\n");
        printf("| Código: %d\n", produtoEncontrado.codigo);
        printf("| Nome: %s\n", produtoEncontrado.nome);
        printf("| Preço: %.2f\n", produtoEncontrado.preco);
        printf("| Setor: %s\n", produtoEncontrado.setor);
        printf("+-----------------------------+\n");
    } else {
        printf("+-------------------------+\n");
        printf("| Produto não cadastrado. |\n");
        printf("+-------------------------+\n");
    }

    // Finaliza a medição de tempo
    fim = clock();

    // Calcula o tempo de execução em segundos
    tempo_execucao = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
    printf("\n Tempo de execução: %.6f segundos\n", tempo_execucao);

    return 0;
}