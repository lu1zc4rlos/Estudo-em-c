#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

// Linha que elimina std para printar na tela
using namespace std;


int main(){
    // c++ com: using namespace std;
    int a = 10;
    cout << "o valor de "<<a<< " e maior que 0\n";

    // c++ sem: using namespace std;
    int b = 20;
    std::cout <<"o valor de "<<b<<" e maior que 10\n";

    // c
    int c = 30;
    printf("o valor de %d e maior que 20\n", c);

    // escrever em c
    char palavra[30];
    printf("Escreva uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    printf("Palavra escrita: %s", palavra);

    // escrevendo em c++
    string outra_palavra;
    cout << "Escreva uma palavra: ";
    getline(cin,outra_palavra);
    cout << "Palavra escrita: "<<outra_palavra;


    return 0;
}