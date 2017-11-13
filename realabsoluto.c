//aula 01/11

#include <stdio.h>

int main(){
    int abs, x;
    printf("\n Informe um numero: ");
    scanf("%d", &x);
    abs = x>0 ? x : -x;
    printf("\nValor Absoluto = %d \n", abs);
}
