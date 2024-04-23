#include <stdio.h>

int main(){

    int num;
    printf("Insira um número: ");
    scanf("%d", &num);
    for(int i =1; i <= num; i++){
        if(i % 2 ==0){
            printf("%d é par \n", i);
        }
        else{
            printf("%d é impar \n",i);
        }
    }
    printf("\n");
    return 0;
}