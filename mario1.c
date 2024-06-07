#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int vezes;
    printf("Quanto de pirâmide vai querer fazer? : ");
    scanf("%d", &vezes);

    int i = 1;
    do{
        char estrela[vezes + 1];
        memset(estrela, '#', i);
        estrela[i] = '\0';

        printf("%s\n", estrela);
        i++;
    }while(i <= vezes);
    return 0;
}