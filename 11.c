// Sort a string array in ascending order.

#include <stdio.h>

int main() {
	char s[10001];
    printf("Input the string: ");
    fgets(s, sizeof s, stdin);

	int len = 0;
    for (int i = 0; s[i] != '\0'; i++) len++;

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len; j++) {
			if (s[i] < s[j]) {
				char tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
    	}
	}

	printf("After sorting the string appears like: %s", s);

	return 0;
}
