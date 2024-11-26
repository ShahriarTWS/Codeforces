#include <stdio.h>

int main() {
    int T, N;

    // Read number of test cases
    scanf("%d", &T);

    // Process each test case
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);

        // Calculate factorial of N
        long long factorial = 1;
        for (int j = 2; j <= N; j++) {
            factorial *= j;
        }

        // Print the factorial of N
        printf("%lld\n", factorial);
    }

    return 0;
}