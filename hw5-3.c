#include <stdio.h>
#include <stdlib.h>

main()
{
    int a,b;
    double c ,d ,e;
    scanf("%d%d",&a,&b);
    if(a<=60){
       c=a*b;
       printf("%04.1f\n",c);
    }
    else if(a>60&&a<=120){
            d=(a-60)*b*1.33;
            printf("%04.1f\n",d+60*b);
    }
     else if(a>120){
            e=(a-120)*b*1.66;
            printf("%04.1f\n",e+(60*b)+(60*b*1.33));
    }
}
