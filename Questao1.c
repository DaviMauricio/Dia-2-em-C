#include <stdio.h>

int main(){
    int numero, horas;
    float valor, salario;

    scanf("%i", &numero);
    scanf("%i", &horas);
    scanf("%f", &valor);

    salario = horas*valor;

    printf("NUMBER = %i\n",numero);
    printf("SALARY = U$ %.2f\n",salario);
    return 0;

}