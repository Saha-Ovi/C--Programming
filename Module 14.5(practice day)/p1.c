#include<stdio.h>
int main()
{   
    int n,i,k,s;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
       for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        k++;
        s--;
        printf("\n");
    }


    
    return 0;
}


