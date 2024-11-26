#include <stdio.h>

// Function to print numbers from 1 to N
void printNumbers(int N) {
    for (int i = 1; i <= N; i++) {
        if (i > 1) {
            printf(" "); // Add a space before numbers after the first
        }
        printf("%d", i);
    }
    printf("\n"); // Print a newline after the sequence
}

int main() {
    int N;
    
    scanf("%d", &N);

    printNumbers(N);

    return 0;
}