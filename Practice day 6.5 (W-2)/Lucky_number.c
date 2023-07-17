#include<stdio.h>
int main()
{
    int a,sum1,sum2;
    scanf("%d",&a);
    sum1=a%10;
    sum2=a/10;
    if(sum1%sum2==0 || sum2%sum1==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");

    }
    
    return 0;
}


