#include<stdio.h>
#include<stdlib.h>
int main()
{
    // int row,col;
    // scanf("%d %d",&row,&col);
    int n;
    scanf("%d",&n);
    // int ar[row][col];
    int ar[n][n];
    //array value input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }

    }
    int sum1=0,sum2=0;
     
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum1=sum1+ar[i][j];
            }
            if(i+j==n-1)
            {
                sum2=sum2+ar[i][j];

            }

        }

    }
    int value=abs(sum1-sum2);
    printf("%d\n",value);  
    return 0;
}


