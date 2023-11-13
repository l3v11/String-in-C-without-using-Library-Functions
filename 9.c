// Count the total number of vowels or consonants in a string.

#include <stdio.h>

int main() {
	char s[10001];
	printf("Input the string: ");
	fgets(s, sizeof s, stdin);

	int vwl = 0, cnst = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
			s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') vwl++;
		else if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') cnst++;
	}

	printf("The total number of vowel in the string is: %d\n", vwl);
	printf("The total number of consonant in the string is: %d\n", cnst);

	return 0;
}
