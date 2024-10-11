#include <stdio.h>
#include <locale.h>

int main(){
    float c, i=0.05, t, JS;

    setlocale(LC_ALL, "Portuguese");

    printf("===== Seja bem-vindo ao Banco do Brasil =====\n\n");
    printf("O valor percentual da taxa de juros é de 5 porcento;");
    printf("\n\nInforme o valor inicial do investimento: ");
    scanf("%f", &c);
    printf("Informe o número de anos: ");
    scanf("%f", &t);

    JS = (c*i*t) + c;

    printf("O valor que será pago + juros é: R$%.2f", JS);


    return 0;
}
