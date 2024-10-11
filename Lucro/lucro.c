#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float vi, va, calc;

    printf("Valor inicial: R$");
    scanf("%f", &vi);
    printf("Valor atual: R$");
    scanf("%f", &va);

    if (vi<va){
        calc = va-vi;
        printf("Você teve um lucro de R$%.2f", calc);
    }
    else{
        calc  = vi-va;
        printf("Você teve um prejuizo de R$%.2f", calc);
    }

    return 0;
}
