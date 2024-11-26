#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long count_even = n / 2;
    long long count_odd = (n + 1) / 2;

    long long sum_even = count_even * (count_even + 1);
    long long sum_odd = count_odd * count_odd;

    long long result = sum_even - sum_odd;

    printf("%lld\n", result);

    return 0;
}