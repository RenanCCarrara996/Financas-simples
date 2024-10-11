#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float valor, meses;
    int i;

    printf("===== BITCOIN =====\n\n");
    printf("Insira o valor inicial do investimento: R$");
    scanf("%f", &valor);

    printf("Insira o número de meses que deseja manter o investimento: ");
    scanf("%f", &meses);

    for(i=1; i<=meses; i++){
        valor = (valor*0.1)+valor;
        printf("R$%.2f\n", valor);
    }
    return 0;
}
