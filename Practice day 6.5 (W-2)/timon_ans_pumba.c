#include<stdio.h>
int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum=a-b;
    if(sum>=0)
    {
        printf("%d",sum);
    
    }
    else
    {
        printf("0");
    }
    
    return 0;
}


