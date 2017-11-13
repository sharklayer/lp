//aula 01/11

#include <stdio.h>

int main(){

    float a, b, m;
    printf("\nInforme a primeira nota obtida: ");
    scanf("%f", &a);
    printf("\nInforme a segunda nota obtida: ");
    scanf("%f", &b);
    
    m = (a+b)/2;
    
    if(m>= 7.0)
        printf("\nAprovado\n");
    else
        printf("\nReprovado\n");

}
