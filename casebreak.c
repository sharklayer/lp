//aula 01/11

#include <stdio.h>

int main(){
    
    int n;
    
    
    printf(" Digite um numero: \n");
    scanf("%d", &n);
    switch(n){
        case 1:printf("%c",'A');break;
        case 3:printf("%c",'B');break;
        case 4:printf("%c",'C');break;
        default:printf("%c",'#');break;
        case 5:printf("%c",'D');break;
    }
    
    printf("%c\n",'.');


}
