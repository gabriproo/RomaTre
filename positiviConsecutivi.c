#include <stdio.h>

int main() {
    int a, b = -1, pp = 0;

     while (a != 0 || b != 0) {
        printf("Inserisci numero: ");
        scanf("%d", &a);
        if (a > 0 && b > 0) pp = 1;
        b = a;
    }
    if (pp == 1) printf("Sono stati inseriti almeno due positivi consecutivamente");
    else printf("Non sono stati inseriti due positivi consecutivamente");
}
