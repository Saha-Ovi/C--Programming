#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n); ///array size
    int ar[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&ar[i]); // value input
    }
    for(int i=0;i<n;i++)
    {
         sum+=ar[i];
    }
printf("%d ",sum);
  
    return 0;
}


