#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    int ar[n];
    int cnt[m+1];
    for (i=0;i<=m;i++)
    {
        cnt[i]=0;
    }


    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        
        cnt[ar[i]]++;
    }
    for(i=1;i<=m;i++)
    {   
        printf("%d\n",cnt[i]);
    }


    
    return 0;
}

