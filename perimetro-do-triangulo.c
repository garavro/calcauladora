#include <stdio.h>
int main() {
    float base, lado1, lado2, perimetro;
    printf("valor do base");
    scanf("%f", &base);
    printf("valor do lado1");
    scanf("%f", &lado1);
     printf("valor do lado2");
    scanf("%f", &lado2);



    perimetro = (base + lado1 + lado2) ;
    printf("a perimetro e : %.2f\n", perimetro);
    return 0;
    }