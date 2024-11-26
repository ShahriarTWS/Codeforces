#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000], T[1000], M[1000];
    int sck = 0, tck = 0;
    gets(S);
    scanf("%[^\n]s", T);

    for (int i = 0; S[i] != '\0'; i++)
    {
        sck++;
    }
    for (int i = 0; T[i] != '\0'; i++)
    {
        tck++;
    }

    printf("%d %d\n", sck, tck);
    printf("%s %s", S, T);

    return 0;
}