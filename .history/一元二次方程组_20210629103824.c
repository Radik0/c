#include <stdio.h>
int mian(void)
{
    int a, b, c;
    a = 1, b = 2, c = 3;
    float delta;
    float x1, x2;
    delta = b * b - 4 * a * c;
    if(delta>0)
    {
        x1 = (-b);
        printf("两个解");
    }
    else if (delta==0)
    {
        printf("一个解");
    }
    else
    {
        printf("无解");
    }
}
