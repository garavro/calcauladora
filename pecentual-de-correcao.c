#include <stdio.h>

int main() {

    float valor_inicial, valor_final, variacao;

    printf("valor inicial");
    scanf("%f", &valor_inicial);

    printf("valor final");
    scanf("%f", &valor_final);

    variacao = (((valor_final - valor_inicial) / valor_inicial) * 1 );
    printf("variacao de porcentagem: %2.f\n", variacao);

    return 0;


}
