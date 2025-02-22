#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y); // 5 10

    x = x + y; //15 10
    y = x - y; //15 5
    x = x - y; // 10 5

    printf("%d %d", x, y);

    return 0;
}