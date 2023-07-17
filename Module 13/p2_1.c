#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    k=(2*n)-1;
    s=0;
    for(int i=n;i>=1;i--)
    {
        for (int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for (int j=1;j<=k;j++)
        {
            printf("*");
        }
       
        printf("\n");
        k=k-2;
        s++;


    }
    
    return 0;
}


