// Count the total number of words in a string.

#include <stdio.h>

int main() {
	char s[1001];
	printf("Input the string: ");
	fgets(s, sizeof s, stdin);

	int cnt = 0;
	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] == ' ' || s[i] == '\n' || s[i] != '\t') cnt++;

	printf("Total number of words in the string is: %d\n", cnt);

	return 0;
}
