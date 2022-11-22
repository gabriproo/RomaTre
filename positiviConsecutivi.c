#include <stdio.h>

int main() {
    int a, b = -1, pp = 0;

    do {
        printf("Inserisci numero: ");
        scanf("%d", &a);
        if (a > 0 && b > 0) pp = 1;
        b = a;
    } while (a != 0 || b != 0);
    if (pp == 1) printf("Sono stati inseriti almeno due positivi consecutivamente");
    else printf("Non sono stati inseriti due positivi consecutivamente");
}
