#include <stdio.h>

int main() {
    int vezes;
    printf("Quantas vezes?: ");
    scanf("%d", &vezes);

    for (int i = 1; i <= vezes; i++) {
        for (int j = 0; j < vezes - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        printf("  ");
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
