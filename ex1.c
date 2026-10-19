#include <stdio.h>

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else if (b > a) { 
        return b;
    } else
        return 0;
}

long fatorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main() {
    int x = 10, y = 5;

    printf("O maior entre: %d e %d é: %d.\n", x, y, maior(x, y));

    int n = 5;

    printf("O fatorial de %d é: %ld.\n", n, fatorial(n));

    return 0;
}