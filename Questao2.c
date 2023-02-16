#include <stdio.h>

int main(){
    int codigo, quantidade;
    float valor, total;

    scanf("%i %i", &codigo, &quantidade);

    if (codigo == 1){
        valor = 4.00;
    }else if (codigo == 2){
        valor = 4.50;
    }else if (codigo == 3){
        valor = 5.00;
    }else if (codigo == 4){
        valor = 2.00;
    }else{
        valor = 1.50; 
    }

    total = valor * quantidade;

    printf("Total: R$ %.2f\n", total);
    return 0;
}