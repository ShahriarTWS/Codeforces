#include <stdio.h>
int main()
{

    int n, evencount = 0, oddcount = 0, positivecount = 0, negattivecount = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evencount++;
        }
        if (arr[i] % 2 != 0)
        {
            oddcount++;
        }
        if (arr[i] > 0)
        {
            positivecount++;
        }
        if (arr[i] < 0)
        {
            negattivecount++;
        }
    }

    printf("Even: %d\n", evencount);
    printf("Odd: %d\n", oddcount);
    printf("Positive: %d\n", positivecount);
    printf("Negative: %d\n", negattivecount);

    return 0;
}