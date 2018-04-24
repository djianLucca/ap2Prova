#include <stdio.h>

int main(){

    int matriz[4][3];
    int valor;

    for(int linha = 0; linha < 4; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            do{
                printf("Insira um valor par para %i | %i : ", linha, coluna);
                scanf("%i", &valor);
            }while(valor % 2 != 0);
            matriz[linha][coluna] = valor;
        }
    }

    printf("\n----------------------\n");

    for(int k = 0; k < 4; k++){
        for(int l = 0; l < 3; l++){
            if(l == 0){
                printf(" %i", matriz[k][l]);
            }else{
                printf(" | %i", matriz[k][l]);
            }
        }
        printf("\n");
    }

    return 0;
}