#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int cnt[10]={0};
    for( i=0;i<n;i++)
    {
        int value= ar[i];
        cnt[value]++;

    }

    for(i =0;i<=9;i++)
    {
        printf("%d - %d\n",i,cnt[i]);
    }

    
    return 0;
}


