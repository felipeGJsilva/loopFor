#include <stdio.h>

int main(){
    int numero;
    int atenum;
    printf("Digite o número para saber a tabuada: ");
    scanf("%d", &numero);
    printf("Digite até quanto a tabuada: ");
    scanf("%d", &atenum);
    for (int i =1; i <=atenum;i++){
        printf("%d x %d = %d\n", numero, i , numero * i);
    }

    return 0 ;
}