#include <stdio.h>
 
int main()
{
    char S;
    int N;
 
    scanf(" %c", &S);
 
    scanf("%d", &N);
 
    int numbers[N];
 
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &numbers[i]);
    }
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < numbers[i]; j++)
        {
            printf("%c", S);
        }
        printf("\n");
    }
 
    return 0;
}