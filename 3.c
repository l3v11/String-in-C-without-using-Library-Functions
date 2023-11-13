// Separate individual characters from a string.

#include <stdio.h>

int main() {
	char s[10001];
	printf("Input the string: ");
	fgets(s, sizeof s, stdin);

	printf("The characters of the string are: ");
	printf("%c", s[0]);
	for (int i = 1; s[i] != '\0'; i++)
		printf(" %c", s[i]);

	return 0;
}
