#include <stdio.h>
#include <stdlib.h>

main()
{
    int a,b;
    float c,d,e;
    scanf("%d%d",&a,&b);
    c=a*30+b*0.5;
    d=b*6;
    e=c-d;
    if(e<0&&e>=-180){
        e=e+180;
    }
    else if(e<-180){
            e=e+360;
    }
    if(e>=180){
        e=e-180;
    }
    else if(e>=360){
            e=e-360;
    }
    printf("%.3f\n",e);
}
