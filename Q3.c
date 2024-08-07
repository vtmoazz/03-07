#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_vowels(char *s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]); // dùng hàm này thì gặp chữ hoa nó trả về chữ thường
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) {
            count++;
        }
    }
    return count;
}

int main() {
    char s[101];

    printf("Enter s: ");
    fgets(s, 101, stdin);

    int vowel_count = count_vowels(s);

    printf("\nOUTPUT\n%d\n", vowel_count);

    return 0;
}
