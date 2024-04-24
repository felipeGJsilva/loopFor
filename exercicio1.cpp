#include <stdio.h>

int main(){
    
    int numero;
    printf("Digite o numero: ");
    scanf("%d", &numero);
    for(int i = 1; i <= numero; i++){
        if(i % 2 ==0){
           
        }
        else{
            printf("%d é impar \n",i);
        }
    }
    printf("\n");
    return 0;
}
    
