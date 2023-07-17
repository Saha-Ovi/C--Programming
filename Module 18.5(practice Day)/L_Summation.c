#include<stdio.h>
long long int show(long long int ar[],int n, int i)
{
    if(i==n) 
    {
        return 0;
    }
    // show(ar,n,i+1);
    return ar[i]+ show(ar,n,i+1);
}
int main()
{
    int n;
    scanf("%lld",&n);
     long long int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
     long long int count =show(ar,n,0);
    printf("%lld",count);

    return 0;
}


