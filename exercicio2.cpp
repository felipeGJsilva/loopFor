#include <stdio.h>

int main(){
    
    int numero;
    printf("Digite o numero: ");
    scanf("%d", &numero);
    for(int i = 2; i <= numero /2 ; i++){
        if(numero % i != 0 ){
                printf("é numero primo\n");
            
            
        }
        else{
            printf("Não é numero primo\n");
        }
    }
    
    printf("\n");
    return 0;
}
    