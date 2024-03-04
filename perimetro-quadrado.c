#include <stdio.h>
int main() {
    float lado, lado2, perimetro;

    printf("valor do lado");
    scanf("%f", &lado);

    printf("valor do lado");
    scanf("%f", &lado2);
   
    perimetro = (lado * lado2);
    printf("a perimetro e: %.2f\n", perimetro);
    return 0;
    }