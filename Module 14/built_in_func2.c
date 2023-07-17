#include<stdio.h>
#include<math.h>
#include<stdlib.h>

// sqrt(),pow() 
// sqrt(),pow() float or double niye kaj kore tobe sqrt,pow output int o dei. 

// int main()
// {
//     double a,b,c;
//     scanf("%lf %lf %lf",&a,&b,&c);
//     double sum=sqrt(a);
//     double val=pow(b,c);

//     printf("%lf %lf",sum,val);


    
//     return 0;
// }

// abs() 
// abs() int niye kaj kore input + output
// abs positive to positive or negative to positive value sign change kore 
int main()
{
    int a;
    scanf("%d",&a);
    int value=abs(a);
    printf("%d",value);
    
    return 0;
}


