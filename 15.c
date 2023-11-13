// Read a sentence and replace lowercase characters with uppercase and vice versa.

#include <stdio.h>

int main() {
	char s[1001];
	printf("Input the string: ");
	fgets(s, sizeof s, stdin);

	printf("The given sentence is: %s", s);

	for (int i = 0; s[i] != 0; i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - ('a' - 'A');
		else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + ('a' - 'A');
	}

	printf("After case changed the string is: %s", s);

	return 0;
}
