#include <stdio.h>

int main(){
    int tamanho = 5;
    int acertos = 0;
    int valor;

    int gabarito[tamanho];
    int aposta[tamanho];

    for(int i = 0; i < tamanho; i++){
        do{
            printf("Digite o %iº numero do gabarito: ", i + 1);
            scanf("%i", &valor);
        }while(valor != 1 && valor != 2 && valor != 3);
        gabarito[i] = valor;
    }

    printf("\n---------GABARITO LIDO------------\n");

    for(int i = 0; i < tamanho; i++){
        do{
            printf("Digite o %iº numero da aposta: ", i + 1);
            scanf("%i", &valor);
        }while(valor != 1 && valor != 2 && valor != 3);
        aposta[i] = valor;
    }


    for(int i = 0; i < tamanho; i++){
        if(aposta[i] == gabarito[i]){
            acertos++;
        }
    }

    if(acertos == tamanho){
        printf("5 acertos -> VENCEDOR\n");
    }else{
        printf("Tente Novamente!\n");
    }


    return 0;
}