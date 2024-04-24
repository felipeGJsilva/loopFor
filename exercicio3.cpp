#include <stdio.h>
#include <iostream>
int main() {
    int n_linhas;
    char simbolo;
    printf("Digite o número de linhas da pirâmide: ");
    scanf("%d", &n_linhas);

    //printf("Digite o simbolo: ");
   
    for (int i = 1; i <= n_linhas; i++) {
     
        for (int j = 1; j <= n_linhas - i; j++) {
            printf(" ");
        }

    
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("x%c", simbolo);
            //printf("x");
        }

        printf("\n");
    }

    return 0;
}
