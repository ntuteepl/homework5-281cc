#include <stdio.h>
#include <stdlib.h>

main()
{
    int a;
    double b, c ,d;
    scanf("%d",&a);
    if(a<=800){
       b=a*0.9;
       printf("%04.1f\n",b);
    }
    else if(a>800&&a<=1500){
            c=a*0.9*0.9;
            printf("%04.1f\n",c);
    }
     else if(a>1500){
            d=a*0.9*0.79;
            printf("%04.1f\n",d);
    }
}
