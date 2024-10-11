#include <stdio.h>
#include <locale.h>

int main(){
    float valor, meses, i=0.07, juros;

    setlocale(LC_ALL, "Portuguese");

    printf("==== Seja bem-vindo ao Banco Santander ====\n\n");
    printf("Nossa taxa de juros para empréstimo é de 7 porcento mensais;\n\n");
    printf("Valor do empréstimo (de R$100 até R$10.000): ");
    scanf("%f", &valor);
    printf("Prazo (até 36 meses): ");
    scanf("%f", &meses);

    if (valor<100 || valor>10000){
        printf("Valor inválido, tente novamente.");
        return 1;
    }
    else if (meses>36){
        printf("Valor inválido, tente novamente.");
        return 1;
    }
    else{
        juros = valor * (1 + i * meses)/meses;
    }

    printf("O valor de juros do empréstimo é de R$%.2f", juros);

    return 0;
}
