#include<stdio.h>
#include<limits.h>
int number(int ar[],int n,int i)
{
    if(i==n)
    {
        return INT_MIN;
    }
    int count = number(ar,n,i+1);
    if(ar[i]>count)
    {
        return ar[i];
    }
    else
    {
        return count;
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum=number(ar,n,0);
    printf("%d",sum);

    
    return 0;
}


