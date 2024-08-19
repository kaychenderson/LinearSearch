#include <stdio.h>
#include <string.h>
#include "produtos.h"

// Inicializa uma lista de produtos típicos de mercado
void inicializarProdutos(Produto produtos[], int *quantidade) {
    Produto listaProdutos[24] = {
        {1001, "Arroz", 20.50, "Alimentos", 5.0, 50},
        {1002, "Feijao", 7.90, "Alimentos", 3.0, 30},
        {1003, "Farinha", 4.50, "Alimentos", 0.0, 35},
        {1004, "Macarrao", 5.50, "Alimentos", 0.0, 40},
        {1005, "Oleo", 9.50, "Alimentos", 0.0, 40},
        {1006, "Bolacha", 9.50, "Alimentos", 0.0, 40},
        {1007, "Carne Bovina", 39.99, "Carnes", 0.0, 20},
        {1008, "Carne Suina", 29.99, "Carnes", 0.0, 15},
        {1009, "Frango", 15.50, "Carnes", 0.0, 25},
        {1010, "Peixe", 25.00, "Carnes", 0.0, 10},
        {1011, "Yogurte", 3.99, "Refrigerados", 0.0, 40},
        {1012, "Queijo", 24.99, "Refrigerados", 0.0, 30},
        {1013, "Ovos", 12.99, "Refrigerados", 0.0, 80},
        {1014, "Alface", 2.99, "Hortifruti", 0.0, 100},
        {1015, "Tomate", 6.50, "Hortifruti", 0.0, 90},
        {1016, "Cenoura", 4.99, "Hortifruti", 0.0, 85},
        {1017, "Maca", 7.99, "Frutas", 0.0, 70},
        {1018, "Banana", 3.99, "Frutas", 0.0, 75},
        {1019, "Pao", 8.99, "Padaria", 0.0, 60},
        {1020, "Bolo", 15.00, "Padaria", 0.0, 25},
        {1021, "Refrigerante", 6.50, "Bebidas", 2.0, 50},
        {1022, "Detergente", 3.99, "Limpeza Doméstica", 10.0, 100},
        {1023, "Shampoo", 12.99, "Cuidados Pessoais", 5.0, 60},
        {1024, "Pasta de Dente", 7.50, "Cuidados Pessoais", 3.0, 55}
    };

    // Copia os produtos para o array de produtos passado como parâmetro
    for (int i = 0; i < 24; i++) {
        produtos[i] = listaProdutos[i];
    }
    *quantidade = 24; // Atualiza a quantidade de produtos
}

// Busca um produto pelo nome
int buscarProduto(Produto produtos[], int quantidade, const char *nome, Produto *produtoEncontrado) {
    for (int i = 0; i < quantidade; i++) {
        if (strcmp(produtos[i].nome, nome) == 0) {
            *produtoEncontrado = produtos[i];
            return 1; // Produto encontrado
        }
    }
    return 0; // Produto não encontrado
}

//  gcc main.c produtos.c -o simulador
//  ./simulador