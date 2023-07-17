#include<stdio.h>
int main()
{

    int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
   
    int flag=1;
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i+j==row-1) //secondary scalar martix  condition
            {
                if(ar[i][j]!=ar[0][col-1]) // secondary scalar martix value checking
                {
                    flag=0;

                }
            }
            else if(ar[i][j]!=0)
            {
                flag =0;
            }
        }
    }
    if (flag==1)
    {
        printf("Secondary Scalar Matrix");
    }
    else
    {
        printf("Not scalar Matrix");

    }
    
    return 0;
}


