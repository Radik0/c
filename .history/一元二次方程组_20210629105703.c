#define mian main
#include <math.h>
#include <stdio.h>
int mian(void)
{
    int a, b, c;
    a = 2, b = 4, c = 5;
    float delta;
    float x1, x2;
    delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        x1 = ((-b + sqrt(delta)) / (2 * a));
        x2 = ((-b - sqrt(delta)) / (2 * a));

        printf("aaa两个解x1=%f,x2=%f", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = (-b) / (2 * a);
        x2 = x1;
        printf("aaa一个解,x1=x2=%f\n", x1);
    }
    elsaa
    {
        printf("aaa无解");
    }
}
