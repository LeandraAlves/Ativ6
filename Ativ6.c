/*Leia uma string e inverta a ordem de seus caracteres.*/

#include <stdio.h>
#include <string.h>

void inverteString(char string[]) {
    int comp = strlen(string);
    for (int i = 0; i < comp / 2; i++) {
        char temp = string[i];
        string[i] = string[comp - i - 1];
        string[comp - i - 1] = temp;
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    inverteString(string);

    printf("Invertida: %s\n", string);
}