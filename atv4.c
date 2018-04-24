#include <stdio.h>

int main(){
    int numeroVendas = 0;
    float valorVendas = 0;
    float maiorValor = 0;

    float venda;

    float vendas[200];
    char continua = 's';

    do{
        printf("Digite o valor da venda de nº %i: ", numeroVendas + 1);
        scanf("%f", &venda);

        if(venda > maiorValor){
            maiorValor = venda;
        }
        valorVendas += venda;
        numeroVendas++;

        printf("Outra venda? (s/n): ");
        scanf(" %c", &continua); 

        if(continua == 'n' || continua == 'N'){
            break;
        }

    }while(numeroVendas < 200);

    printf("\n---------------------------------\n");
    printf("Numero de vendas: %i\n", numeroVendas);
    printf("Valor total de vendas: %.2f\n", valorVendas);
    printf("Maior venda: %.2f\n", maiorValor);

    return 0;
}