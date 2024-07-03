#include <stdio.h>
#include <ctype.h>
#include <string.h>

void removeCha(char *s) {
    int i, j;
    for (i = 0, j = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == ' ') {
            s[j++] = s[i];
        }
    }
    s[j] = '\0'; 
}

int main() {
    char s[101];

    printf("Enter s: ");
    fgets(s, 101, stdin);

    removeCha(s);

    printf("\nOUTPUT\n%s\n", s);

    return 0;
}
