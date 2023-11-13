// Read a string from the keyboard and sort it using bubble sort.

#include <stdio.h>

int main() {
    int n;
    printf("Input number of strings: ");
    scanf("%d", &n);

    char s[n][1001];
	getchar();

    for (int i = 0; i < n; i++) {
        printf("Input string %d: ", i + 1);
        fgets(s[i], sizeof(s[i]), stdin);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int cmp = 0;
            int k = 0;
            while (s[i][k] == s[j][k]) {
                if (s[i][k] == '\0') break;
                k++;
            }
            cmp = s[i][k] - s[j][k];

			char tmp[1001];
            if (cmp > 0) {
                k = 0;
                while (s[i][k] != '\0') {
                    tmp[k] = s[i][k];
                    k++;
                }
                tmp[k] = '\0';

                k = 0;
                while (s[j][k] != '\0') {
                    s[i][k] = s[j][k];
                    k++;
                }
                s[i][k] = '\0';

                k = 0;
                while (tmp[k] != '\0') {
                    s[j][k] = tmp[k];
                    k++;
                }
                s[j][k] = '\0';
            }
        }
    }

    printf("The strings appear after sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s", s[i]);
    }

    return 0;
}
