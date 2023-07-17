#include<stdio.h>
int main()
{
    int i,k,n;
    scanf("%d",&n);
    k=n;
    for(i=n;i>=1;i--)
    {
        for(int j=1;j<=k;j++)
        {
            printf("*");

        }
        k--;
        printf("\n");
    }


    
    return 0;
}


