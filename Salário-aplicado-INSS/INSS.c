#include <stdio.h>
#include <math.h>

int main(){
    float bruto, desconto, inss, liquido;

    printf("Salario Bruto: ");
    scanf("%f", &bruto);

    if(bruto<=1412){
        desconto = 0.075;
    }
    else if(bruto>=1412.01 && bruto<=2666.68){
        desconto = 0.09;
    }
    else if(bruto>=2666.69 && bruto<=4000.03){
        desconto = 0.12;
    }
    else{
        desconto = 0.14;
    }

    inss = bruto * desconto;
    liquido = bruto - inss;

    printf("Salario liquido: R$%.2f", liquido);

    return 0;
}
