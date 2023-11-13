// Print individual characters of a string in reverse order.

#include <stdio.h>

int main() {
	char s[10001];
	printf("Input the string: ");
	fgets(s, sizeof s, stdin);

	int cnt = 0;
	for (int i = 0; s[i] != '\0'; i++) cnt++;

	printf("The characters of the string in reverse are: ");
	printf("%c", s[cnt - 2]);
	for (int i = cnt - 3; i >= 0; i--)
		printf(" %c", s[i]);
	printf("\n");

	return 0;
}
