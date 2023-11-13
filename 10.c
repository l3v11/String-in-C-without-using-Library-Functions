// Find the maximum number of characters in a string.

#include <stdio.h>

int main() {
	char s[10001];
    printf("Input the string: ");
    fgets(s, sizeof s, stdin);

	int cnt[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) cnt[s[i]]++;

    char maxchar;
    int maxcnt = 0;

    for (int i = 0; i < 256; i++) {
        if (cnt[i] > 0 && cnt[i] > maxcnt) {
            maxcnt = cnt[i];
            maxchar = (char)i;
        }
    }

	printf("The Highest frequency of character '%c' appears number of times: %d\n", maxchar, maxcnt);

	return 0;
}
