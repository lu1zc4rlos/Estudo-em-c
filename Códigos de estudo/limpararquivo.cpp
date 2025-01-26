#include <stdio.h>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream MeuArquivo;

    MeuArquivo.open("estudo.txt");

    MeuArquivo << "";

    MeuArquivo.close();

    return 0;
}