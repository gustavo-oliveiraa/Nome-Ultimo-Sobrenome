#include <stdio.h>

int main() {
    char nome[100];
    char *p = nome;
    char *ultimo;
    
    printf("Digite um nome: ");
    fgets(nome,100,stdin);
    
    while(*p){
        if(*p == ' '){
            ultimo = p + 1;
            *p = 0;
        }
        p++;
    }
     fflush(stdin);
    printf("%s, %s",ultimo, nome);
   
    
    return 0;
}
