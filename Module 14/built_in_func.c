#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    // ceil ,floor,round double
    // ceil ,floor,round double diye input nei output int or doble ektate hoile ei holo
    
    double a,b,c,sum1,sum2,sum3;
    scanf("%lf %lf %lf",&a,&b,&c);
    sum1=ceil(a);
    sum2=floor(b);
    sum3=round(c);
    printf("%lf %lf %lf",sum1,sum2,sum3);

    
    return 0;
}


