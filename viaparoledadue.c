#include <stdio.h>
#include <string.h>

int isAlfa(char c) {
    return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z';
}

void viaParoleDaDue(char stringa[]) {
    int i = 0, j = 0;

    
    while (stringa[i] != '\0') {
        if (i == 0) {
            while (isAlfa(stringa[i]) && isAlfa(stringa[i+1]) && !isAlfa(stringa[i+2])) {
                for (int k = 0; k < 2; k++) {
                    j = i;
                    while (stringa[j] != '\0') {
                        stringa[j] = stringa[j+1];
                        j++;
                    }
                }
            }
            i++;
        }
        else {
            while (isAlfa(stringa[i]) && isAlfa(stringa[i+1]) && !isAlfa(stringa[i+2]) && !isAlfa(stringa[i-1])) {
                for (int k = 0; k < 2; k++) {
                    j = i;
                    while (stringa[j] != '\0') {
                        stringa[j] = stringa[j+1];
                        j++;
                    }
                }
            }
            i++;
        }
    }
}

int main() {
    char stringa[] = "ab12cde56ee78a67bb";
    viaParoleDaDue(stringa);
    printf("%s", stringa);
}