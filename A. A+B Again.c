//A. A+B Again?
#include <stdio.h>

int main() {
    int t, n, num1, num2, sum;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        num1 = n / 10;
        num2 = n % 10;

        sum = num1 + num2;

        printf("%d\n", sum);
    }

    return 0;
}