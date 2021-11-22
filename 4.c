#include<stdio.h>
#include<string.h>

int main() {

    int i, j, len, v = 1;
    char s[100];

    printf("Enter a string:");
    gets(s);

    len = strlen(s);

    printf("Duplicate Values :")
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (s[i] == s[j]) {
                if (v == 1 && s[j] != '\0') {
                    printf("%c", s[i]);
                }
                s[j] = '\0';
                v++;
            }
        }
        v = 1;
    }

    return 0;
}
