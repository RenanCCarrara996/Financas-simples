#include <stdio.h>
#include <locale.h>

int main(){
    float valor, meses, i=0.07, juros;

    setlocale(LC_ALL, "Portuguese");

    printf("==== Seja bem-vindo ao Banco Santander ====\n\n");
    printf("Nossa taxa de juros para empr�stimo � de 7 porcento mensais;\n\n");
    printf("Valor do empr�stimo (de R$100 at� R$10.000): ");
    scanf("%f", &valor);
    printf("Prazo (at� 36 meses): ");
    scanf("%f", &meses);

    if (valor<100 || valor>10000){
        printf("Valor inv�lido, tente novamente.");
        return 1;
    }
    else if (meses>36){
        printf("Valor inv�lido, tente novamente.");
        return 1;
    }
    else{
        juros = valor * (1 + i * meses)/meses;
    }

    printf("O valor de juros do empr�stimo � de R$%.2f", juros);

    return 0;
}
