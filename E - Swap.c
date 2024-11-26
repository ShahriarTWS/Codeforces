#include <stdio.h>
int x, y;

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("%d %d\n", x, y);
}

int main()
{

    int x, y;
    scanf("%d%d", &x, &y);

    swap(x, y);

    return 0;
}