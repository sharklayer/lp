//aula 18/10
#include <stdio.h>

int main(){
    char nome[10]="";
    int idade;
    printf("Digite o nome:");
    scanf("%s", nome);
    printf("Digite a idade:");
    scanf("%d", &idade);
    printf("O nome eh %s e a idade eh %d\n.", nome, idade);
}
