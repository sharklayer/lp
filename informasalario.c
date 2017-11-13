//aula 01/11

#include <stdio.h>

int main(){
    int thora;
    float sal;
    
    printf("Informe o numero de horas trabalhadas: ");
    scanf("%d", &thora);
    
    sal = 19.50 *thora;
    if(sal > 1500){
        sal = sal - (sal * 0.1);
        printf("O salario liquido eh: %.2f\n", sal);
        
    }
    else{
        printf("O salario liquido eh: %.2f\n", sal);
    }

}
