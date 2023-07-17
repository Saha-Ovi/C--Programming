#include<stdio.h>
int main()
{
       int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col];
    for(int i=0;i<row;i++)
    {
       for (int j=0;j<col;j++)
       {
        scanf("%d",&ar[i][j]);
       }
    }
    int flag=1;
    
    //first check diagonal matrix is a square matrix or not
    if(row!=col)
    {
        flag=0;
    }
    for(int i=0;i<row;i++)
    {
       for (int j=0;j<col;j++)
       {
        if (i==j)
        {
            if (ar[i][j]!=ar[0][0])
        {
           flag=0;
         
        }
            //continue;   //continue bad gele porer condition else if ar continue dile if dibo
        }

        //without continue using else if
        else if (ar[i][j]!=0)
        {
            flag=0;
        }

       }
    }
    if(flag==1)
    {
        printf("Primary scalar Matrix");
    }
    else
    {
        printf("Not scalar Matrix");
    }

    return 0;
}