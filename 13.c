// Extract a substring from a given string.

#include <stdio.h>

int main() {
	char s1[10001];
	printf("Input the string: ");
	fgets(s1, sizeof s1, stdin);

	int n;
	printf("Input the position to start extraction: ");
	scanf("%d", &n);

	int len;
	printf("Input the length of substring: ");
	scanf("%d", &len);

	char s2[10001];
	int i = 0;

	while (i < len) {
		s2[i] = s1[n + i - 1];
		i++;
	}
	s2[i] = '\0';

	printf("The substring retrieve from the string is: %s\n", s2);

	return 0;
}
