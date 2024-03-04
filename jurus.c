#include <stdio.h>
 int main() {
    float jurus, capital, taxa_de_jurus, tempo;

    printf("valor do capital");
    scanf("%f", &capital);

    printf("valor da taxa de jurus");
    scanf("%f", &taxa_de_jurus);
    
    printf("valor do tempo");
    scanf("%f", &tempo);
    
    jurus = (capital * taxa_de_jurus * tempo );

    printf("o valor do jurus= : %.2f\n", jurus);

    return  0;
    }