#include <math.h>
#include <stdio.h>
int main(void)
{
    int a, b, c;
    a = 1, b = 2, c = 3;
    float delta;
    float x1, x2;
    delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        x1 = ((-b + sqrt(delta)) / (2 * a));
        x2 = ((-b - sqrt(delta)) / (2 * a));

        printf("两个解x1=%f,x2=%f", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = (-b) / (2 * a);
        x2 = x1;
        printf("一个解,x1=x2=%f\n", x1);
    }
    else
    {
        printf("无解");
    }
}
