#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    scanf("%f",&x);

    double y;
    y=(x*9/5)+32;

    printf("%04.1f\n",y);
    return 0;
}
