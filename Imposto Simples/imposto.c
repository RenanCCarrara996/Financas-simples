#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float rend, imposto;

    printf("===== Calculadora de Imposto =====\n\n");
    printf("Valor da alíquota (fixa): 15%\n\n");
    printf("Informe o valor de seu rendimento anual: ");
    scanf("%f", &rend);

    imposto = rend*0.15;

    printf("O Imposto é %.2f", imposto);

    return 0;
}
