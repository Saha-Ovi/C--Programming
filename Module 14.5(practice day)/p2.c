#include<stdio.h>
int main()
{
    int n,i,s,k;
    scanf("%d",&n);
    k=(2*n)-1;
    s=0;
    for(i=n;i>=1;i--)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");

        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        s++;
        k=k-2;
        printf("\n");
    }


    
    return 0;
}


