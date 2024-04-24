#include <stdio.h>

int main() {
    int n_linhas;
    printf("Digite o número de linhas da pirâmide: ");
    scanf("%d", &n_linhas);

    for (int i = 1; i <= n_linhas; i++) {
     
        for (int j = 1; j <= n_linhas - i; j++) {
            printf(" ");
        }

    
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
