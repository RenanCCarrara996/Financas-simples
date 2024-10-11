#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int idade_atual, idade_aposentadoria, tempo;

    printf("===== C�lcule sua aposentadoria =====\n\n");
    printf("Insira sua idade atual: ");
    scanf("%i", &idade_atual);
    printf("Insira a idade que deseja se aposentar: ");
    scanf("%i", &idade_aposentadoria);

    if(idade_aposentadoria < idade_atual){
        printf("Voc� est� ou deveria estar aposentado(a).");
        return 0;
    }
    else{
        tempo = idade_aposentadoria - idade_atual;
        printf("Falta(m) aproximadamente %i ano(s) para sua aposentadoria.", tempo);
    }

    return 0;
}
