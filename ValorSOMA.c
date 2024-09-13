#include <stdio.h>

int main() {
    int INDICE = 12;
    int SOMA = 0;
    int k = 1;

    while (k < INDICE) {
        k += 1;
        SOMA += k;
    }

    printf("SOMA = %d\n", SOMA);

    return 0;
}
