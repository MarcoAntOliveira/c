#include <stdio.h>
#include <stdlib.h>

int main() {
    // Cria o diretório NewDir dentro do diretório /Documents
    system("mkdir ~C:/Users/marco/projetos/c/NewDir");

    // Cria um arquivo texto chamado listDir.txt dentro do diretório NewDir
    system("touch ~C:/Users/marco/projetos/c/NewDir/listDir.txt");

    // Lista o conteúdo de /Documents com informações de permissões e grava em listDir.txt
    system("ls -l ~/Documents > ~/Documents/NewDir/listDir.txt");

    // Lê e exibe o conteúdo de listDir.txt
    FILE *file = fopen("~/Documents/NewDir/listDir.txt", "r");
    if (file != NULL) {
        char c;
        while ((c = fgetc(file)) != EOF) {
            putchar(c);
        }
        fclose(file);
    } else {
        perror("Erro ao abrir o arquivo");
    }

    return 0;
}
