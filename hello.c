
#include <stdio.h>

int main(void)
{
    char resposta[50]; 
    printf("Qual seu nome? ");
    scanf("%49s", resposta); 
    printf("hello, %s!\n", resposta);
}
