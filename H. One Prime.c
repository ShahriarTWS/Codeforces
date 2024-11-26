#include <stdio.h>

int main()
{
    int n, flag = 0;

    scanf("%d", &n);
    for (int i = 2; i <= n / 2; ++i)
    {

        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}