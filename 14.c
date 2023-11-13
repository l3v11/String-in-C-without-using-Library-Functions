// Check whether a substring is present in a string.

#include <stdio.h>

int main() {
	char s1[10001];
	printf("Input the string: ");
	fgets(s1, sizeof s1, stdin);

	for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == '\n') {
            s1[i] = '\0';
            break;
        }
    }

    char s2[10001];
    printf("Input the substring to be searched: ");
    fgets(s2, sizeof s2, stdin);

    for (int i = 0; s2[i] != '\0'; i++) {
        if (s2[i] == '\n') {
            s2[i] = '\0';
            break;
        }
    }

    for (int i = 0; s1[i] != '\0'; i++) {
        int j = 0;

        while (s2[j] != '\0' && s1[i + j] == s2[j]) {
            j++;
        }

        if (s2[j] == '\0') {
            printf("The substring exists in the string.\n");
            return 0;
        }
    }

    printf("The substring does not exist in the string.\n");

	return 0;
}
