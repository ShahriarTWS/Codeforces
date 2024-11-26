#include <stdio.h>
 
int main()
{
    int N;
    scanf("%d", &N);
 
    int even = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            even = 1;
        }
    }
 
    if (!even)
    {
        printf("-1\n");
    }
 
    return 0;
}