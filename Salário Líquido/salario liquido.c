#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float bruto, liquido, IR, INSS;

    printf("===== Cálculo de salário líquido =====\n\n");
    printf("Informe seu salário bruto: ");
    scanf("%f", &bruto);

    //Desconto Imposto de Renda (IR)
    if (bruto <=1903.98){
        IR = 0;
    }
    else if(bruto >= 1903.99 && bruto <= 2826.65){
       IR = 0.075;
    }
    else if(bruto >= 2826.66 && bruto <= 3751.05){
       IR = 0.15;
    }
    else if(bruto >= 3751.06 && bruto <= 4664.68){
       IR = 0.225;
    }
    else{
        IR = 0.275;
    }

    if(IR != 0){
    IR = bruto * IR;
    }

    //Desconto INSS
    if (bruto <=1100){
        INSS = 0.075;
    }
    else if(bruto >= 1100.01 && bruto <= 2203.48){
       INSS = 0.09;
    }
    else if(bruto >= 2203.49 && bruto <= 3305.22){
       INSS = 0.12;
    }
    else if(bruto >= 3305.23 && bruto <= 6433.57){
       INSS = 0.14;
    }

    if(INSS != 0){
    INSS = bruto * INSS;
    }

    liquido = bruto - IR - INSS;

    printf("Seu salário líquido é de %.2f", liquido);

    return 0;
}
