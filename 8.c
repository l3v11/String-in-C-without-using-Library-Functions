// Copy one string to another string.

#include <stdio.h>

int main() {
	char s1[10001];
	printf("Input the string: ");
	fgets(s1, sizeof s1, stdin);

	char s2[10001];
	int cnt = 0;

	for (int i = 0; s1[i] != '\0'; i++) {
		s2[i] = s1[i];
		cnt++;
	}

	printf("The First string is: %s", s1);
	printf("The Second string is: %s", s2);
	printf("Number of characters copied: %d\n", cnt);

	return 0;
}
