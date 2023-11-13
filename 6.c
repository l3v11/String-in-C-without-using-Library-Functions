// Compare two strings.

#include <stdio.h>

int main() {
    char s1[10001], s2[10001];

    printf("Input the 1st string: ");
    fgets(s1, sizeof s1, stdin);

    printf("Input the 2nd string: ");
    fgets(s2, sizeof s2, stdin);

    printf("String1: %s", s1);
    printf("String2: %s", s2);

    int flag = 0;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) flag = 1;
    }

    if (flag) printf("Strings are not equal.\n");
    else printf("Strings are equal.\n");

    return 0;
}
