#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000000];
    int sum = 0;
    scanf("%s", S);

    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= '0' && S[i] <= '9')
        {
            sum += (S[i] - '0');
        }
    }
    printf("%d\n", sum);

    return 0;
}