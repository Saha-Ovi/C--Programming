#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int ar[n];
    for (int i=0; i< n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum+=ar[i];
    }
   
   if(sum>0)
   {
        printf("%d",sum);
   }
    else if(sum<0)
    {
        printf("%d",sum*-1);
    }
    
    return 0;
}


