#include <stdio.h>

int main() {
    char str[1000000]; 
    scanf("%[^\n]s",str);

    int count = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the current character is an alphabet
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0; 
        }
    }

    printf("%d\n", count); 
    return 0;
}