//aula 01/11

#include <stdio.h>

int main(){

    int ano;
    
    printf("Informe o ano: ");
    scanf("%d", &ano);
    
    if((ano%4 == 0) && (ano%100 != 0)){
        printf("O ano eh bissexto!\n");
    }
    else{
        printf("O ano nao eh bissexto!\n");
    }

}
