// Count the total number of alphabets, digits and special characters in a string.

#include <stdio.h>

int main() {
	char s[10001];

	printf("Input the string: ");
	fgets(s, sizeof s, stdin);

	int alph = 0, dgts = 0, spch = 0;
	for (int i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) alph++;
		else if (s[i] >= '0' && s[i] <= '9') dgts++;
        else spch++;
    }

	printf("Number of Alphabets in the string is: %d\n", alph);
	printf("Number of Digits in the string is: %d\n", dgts);
	printf("Number of Special characters in the string is: %d\n", spch);

	return 0;
}
