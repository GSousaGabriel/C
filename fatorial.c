#include <stdio.h>

int fatorial(int x){
    if(x==1){
        return 1;
    }else{
        return x* fatorial(x-1);
    }
}

int main(){
    int x;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    printf("O fatorial de %d e %d\n", x, fatorial(x));
}