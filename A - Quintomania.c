#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int notes[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &notes[i]);
        }

        int is_perfect = 1;
        for (int i = 1; i < n; i++)
        {
            int interval = abs(notes[i] - notes[i - 1]);

            if (interval != 5 && interval != 7)
            {
                is_perfect = 0;
                break;
            }
        }

        if (is_perfect)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
