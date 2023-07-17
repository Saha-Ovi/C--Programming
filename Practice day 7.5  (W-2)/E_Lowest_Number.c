#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int mn=INT_MAX;
    int posi;
    for(i=0;i<n;i++)
    {
        if(ar[i]<mn)
        {
            mn=ar[i];
            posi=i+1;
        }
    }
    printf("%d %d",mn,posi);
    
    return 0;
}


