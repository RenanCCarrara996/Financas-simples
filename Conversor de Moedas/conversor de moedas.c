#include <stdio.h>
#include <locale.h>

int main(){
    int moeda;
    float R$=5.58, US$=0.18;

    setlocale(LC_ALL, "Portuguese");

    printf("===== Conversor de moedas (US$ e R$) =====\n\n");
    printf("O que deseja converter?\n [1] Converter D�lares Americanos para Reais;\n [2] Converter Reais para Dol�res Americanos .\nDigite aqui: ");
    scanf("%i", &moeda);

    switch (moeda){
        case 1:
            printf("Insira o valor em D�lares Americanos (US$): ");
            scanf("%f", &US$);

            R$ = US$ * R$;

            printf("\n$%.2f (d�lares) s�o R$%.2f (reais).", US$, R$);
            break;

        case 2:
            printf("Insira o valor em Reais (R$): ");
            scanf("%f", &R$);

            US$ = US$ * R$;

            printf("\nR$%.2f (reais) s�o $%.2f (d�lares).", R$, US$);
            break;

        default:
            printf("Op��o inv�lida, tente novamente.");
    }
    return 0;
}
