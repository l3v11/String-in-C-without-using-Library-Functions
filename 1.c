// Input a string and print it.

#include <stdio.h>

int main() {
	char s[10001];
	printf("Input the string: ");
	fgets(s, sizeof s, stdin);

	printf("The string you entered is: %s", s);

	return 0;
}
