#include <stdio.h>

void troca(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 9;

    printf("Valores antes da troca: x = %d e y = %d.\n", x, y);
    troca(&x, &y);
    printf("Valores depois da troca: x = %d e y = %d.\n", x, y);

    return 0;
}