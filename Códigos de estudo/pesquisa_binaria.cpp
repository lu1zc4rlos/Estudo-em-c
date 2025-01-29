#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 10

using namespace std;

void imprimir_vetor(int vetor[TAM])
{
    int cont1;
    for (cont1 = 0; cont1 < TAM; cont1++)
    {
        cout << vetor[cont1] << " | ";
    }
}

void procurar_valor(int vetor[TAM], int valor_procurado, bool *valor_encontrado)
{
    int esquerda = 0;
    int direita = TAM - 1;
    int meio = direita / 2;

    while (esquerda <= direita)
    {
        if (vetor[meio] == valor_procurado)
        {
            meio += 1;
            cout << "valor encontrado na posicao: " << meio;
            *valor_encontrado = true;
            return;
        }
        if (valor_procurado < vetor[meio])
        {
            direita = meio - 1;
            meio = (esquerda + direita) / 2;
        }
        if (valor_procurado > vetor[meio])
        {
            esquerda = meio + 1;
            meio = (esquerda + direita) / 2;
        }
    }
}

int main()
{
    int vetor[TAM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int valor_procurado;
    bool valor_encontrado;
    imprimir_vetor(vetor);

    cout << "\nDigite um valor a ser buscado: ";
    cin >> valor_procurado;
    procurar_valor(vetor, valor_procurado, &valor_encontrado);
    if (valor_encontrado == false)
    {
        cout << "Valor nao encontrado";
    }

    return 0;
}