//aula 01/11

#include <stdio.h>

float x, y;
char op;

int main(){
    printf("\n Calculo ");
    printf("\n Informe o primeiro numero: ");
    scanf("%f", &x);
    printf("\n Informe o segundo numero: ");
    scanf("%f", &y);
    printf("\n Informe o operador: ");
    scanf("%s", &op);
    
    switch(op){
        case '+': printf("\n valor = %.2f\n", x+y);break;
        case '-': printf("\n valor = %.2f\n", x-y);break;
        case '*': printf("\n valor = %.2f\n", x*y);break;
        case '/': printf("\n valor = %.2f\n", x/y);break;
        default: printf("\n Operador invalido: %c\n", op);
        
    }
}
