#include <stdio.h>

int main(){
    //abre o arquivo para escrita
    char palavra[100];
    FILE *file;
    file = fopen("estudo.txt", "w");

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    fprintf(file, "%s", palavra);

    fclose(file);

    //abre o arquivo para leitura 
    file = fopen("estudo.txt", "r");
    int c;
    char PALAVRA[100];
    int contador = 0;

      while((c = getc(file)) != EOF){
      PALAVRA[contador]=c;
      contador++;
      }
    PALAVRA[contador] = '\0';
    printf("Palavra lida: %s", PALAVRA);

    fclose(file);


    //grava no final do arquivo
    file = fopen("estudo.txt", "a");
    char outra_palavra[100];
    printf("\nDigite uma palavra: ");
    fgets(outra_palavra, sizeof(outra_palavra), stdin);
    fprintf(file, "%s", outra_palavra);

    fclose(file);

    return 0;
}