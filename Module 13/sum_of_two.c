#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    //array value input
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int x;
    scanf("%d",&x);
    int flag=0;
    //array value checking wheter the value i+j=x kina

    for( i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]+ar[j]==x)
            {
                flag=1;

            }
        }      

    }
    if (flag==0)
        {
            printf("NO\n");
        }
    else{
        printf("Yes");
    }
    
    return 0;
}


