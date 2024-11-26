//A. Word
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char s[101];
    scanf("%s", s);

    int len = strlen(s);
    int upper_count = 0, lower_count = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upper_count++;
        } else {
            lower_count++;
        }
    }

    if (upper_count > lower_count) {
        for (int i = 0; i < len; i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < len; i++) {
            s[i] = tolower(s[i]);
        }
    }

    printf("%s\n", s);

    return 0;
}
