<div>
<br>

<h1 align="center" style="font-weight: bold;">Busca Linear (Linear Search) 💻</h1>
<p align="center">
    <a href="#tech">Tecnologias</a> •
    <a href="#about">Sobre o Algoritmo</a> •
    <a href="#complexity">Complexidade</a> •
    <a href="#colab">Cotribuidores</a> •
</p>

<div>
  <h2 id="tech" style="font-weight: bold; font-size: 2rem">Tecnologia Utilizada</h2> 
  <img align="center" alt="c" src="https://img.shields.io/badge/C-FFFFFF?style=for-the-badge&logo=c&logoColor=black"/>

  <h2 id="about" style="font-weight: bold; font-size: 2rem">Sobre o Algoritmo</h2>

A Busca Linear é um algoritmo simples de busca que percorre uma lista de elementos sequencialmente até encontrar o elemento procurado ou até o final da lista. 
## Como Funciona

- Iteração Sequencial: O algoritmo começa no início da lista e verifica cada elemento um por um até encontrar o elemento desejado ou até chegar ao final da lista.

- Comparação: Para cada elemento na lista, o algoritmo compara o valor procurado com o valor do elemento atual. Se houver uma correspondência, o elemento é retornado; caso contrário, o algoritmo continua a busca.

- Simplicidade: A Busca Linear é fácil de implementar e não requer que a lista esteja ordenada. No entanto, pode ser ineficiente para listas grandes, pois o tempo de execução é proporcional ao tamanho da lista.

## Implementação

```c
#include <stdio.h>

// Função de busca linear
int buscaLinear(int arr[], int tamanho, int chave) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == chave) {
            return i; // Retorna o índice do elemento encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int chave = 10;
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int resultado = buscaLinear(arr, tamanho, chave);

    if (resultado == -1) {
        printf("Elemento não encontrado\n");
    } else {
        printf("Elemento encontrado no índice %d\n", resultado);
    }
    return 0;
}
```

## Como rodar na minha maquina?

Primeiro Clone o repositorio na sua maquina:

```bash
git clone https://github.com/kaychenderson/LinearSearch
```

Para executar você precisa navegar até o diretório onde o arquivo c se encontra, e no terminal use este comando:

```
gcc main.c produto.c -o caixa_supermercado
./caixa_supermercado
```

  <h2 id="complexity" style="font-weight: bold; font-size: 2rem">Complexidade</h2>

### Pior Caso:

O pior caso ocorre quando o elemento procurado está no final da lista ou não está presente, obrigando o algoritmo a verificar todos os elementos da lista. Portanto, a complexidade para o pior caso é O(n).

```
c1 * 1 + c2 * 1 + c3 * 1 + ... + c_n * 1 = O(n)
```

### Melhor Caso:

O melhor caso ocorre quando o elemento procurado está no início da lista, e o algoritmo encontra o elemento imediatamente. Portanto, a complexidade para o melhor caso é O(1).

```
c1 * 1 + c2 * 1 = O(1)
```
  
  <h2 id="colab" style="font-weight: bold; font-size: 2rem">Contribuidores</h2>
 
  <table>
    <tr>
      <td align="center">
        <a href="#">
          <img src="https://avatars.githubusercontent.com/u/146909378?v=4" width="100px;" alt="Foto de Perfil 1"/><br>
          <sub>
            <a href="https://github.com/kaychenderson"><b>Kayc Henderson</b></a>
          </sub>
        </a>
      </td>
          </sub>
        </a>
      </td>
      <td align="center">
        <a href="#">
        </a>
      </td>
      <td align="center">
        <a href="#">
          <img src="https://avatars.githubusercontent.com/u/167001503?v=4" width="100px;" alt="Foto de Perfil 2"/><br>
            <sub>
              <a href="https://github.com/renat0ben"><b>Renato Bento</b></a>
            </sub>
        </a>
      </td>
    </tr>
  </table>
</div>