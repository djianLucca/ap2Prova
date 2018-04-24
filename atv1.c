#include <stdio.h>

int main(){
    int matriz[3][3];
    int maiorLinhas[3];
    int menorColunas[3];

    int maior = 0;
    int menor;


    // Leitura 3x3
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite a linha %i e a coluna %i: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

   //Popula maiorLinhas 
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            if(matriz[linha][coluna] > maior){
                maior = matriz[linha][coluna];
                maiorLinhas[linha] = maior;
            }
        }
        maior = 0;
    }

    //Popula menorColunas
    for(int coluna = 0; coluna < 3; coluna++){
        for(int linha = 0; linha < 3; linha++){
            if(linha == 0){
                menor = matriz[linha][coluna];
                menorColunas[coluna] = menor;
            }else{
                if(matriz[linha][coluna] < menor){
                    menorColunas[coluna] = matriz[linha][coluna];
                }
            }
        }
    }

    printf("\n-------------------------------------\n");
    printf("Menor Colunas \n");
    for(int k = 0; k < 3; k++){
        if(k == 0){
            printf(" %i", menorColunas[k]);
        }else{
            printf(" | %i", menorColunas[k]);
        }
    }

    printf("\n-------------------------------------\n");
    printf("Maior Linhas \n");
    for(int l = 0; l < 3; l++){
        if(l == 0){
            printf(" %i", maiorLinhas[l]);
        }else{
            printf(" | %i", maiorLinhas[l]);
        }
    }

    printf("\n");

    return 0;

}