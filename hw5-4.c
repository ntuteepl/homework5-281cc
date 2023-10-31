#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float c, d, e;
    scanf("%d%d", &a, &b);
    c = a * 30 + b * 0.5;
    d = b * 6;
    e = c - d;
    e = fabs(e);

    if (e >= 180 && e < 360) {
        e = e - 360;
        e = fabs(e);
    }
    printf("%.3f\n", e);

    return 0;
}
