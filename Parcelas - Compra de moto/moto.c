#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float moto, parcela, taxa = 0.02;

    printf("Informe o valor da moto: R$");
    scanf("%f", &moto);
    printf("Informe o número de parcelas: ");
    scanf("%f", &parcela);

    parcela = (moto/parcela)*(1+taxa);

    printf("O valor da parcela é de %.2f", parcela);

    return 0;
}
