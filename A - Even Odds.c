#include <stdio.h>
int main()
{

    long long int x, y, z;

    scanf("%lld%lld", &x, &y);

    if (x % 2 == 0)

        z = x / 2;
    else
        z = (x + 1) / 2;

    if (y <= z)
        printf("%lld\n", (y * 2) - 1);

    else
        printf("%lld\n", (y - z) * 2);

    return 0;
}