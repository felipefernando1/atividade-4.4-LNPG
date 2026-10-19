#include <stdio.h>

long soma_rec(int n) {
    if (n == 1)                        //caso base
        return 1;
    else
        return n += soma_rec(n - 1);   //passo recursivo
}

long soma_iter(int n) {
    long count = 0;
    for(int i = 0; i <= n; i++) {
        count += i;
    }
    return count;
}

int main() {
    int n = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("rec = %ld, iter = %ld\n", soma_rec(n), soma_iter(n));

    return 0;
}