// Find the length of a string.

#include <stdio.h>

int main() {
	char s[10001];
	printf("Input the string: ");
	fgets(s, sizeof s, stdin);

	int cnt = 0;
	for (int i = 0; s[i] != '\0'; i++) cnt++;

	printf("Length of the string is: %d\n", cnt);

	return 0;
}
