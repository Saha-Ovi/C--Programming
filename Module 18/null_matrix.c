#include<stdio.h>
int main()
{
    int row,col,count=0;
    scanf("%d %d",&row,&col);
    int ar[row][col];
    int element=row*col;

    for(int i=0;i<row;i++)
   {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&ar[i][j]);
        }
   }

    for(int i=0;i<row;i++)
   {
        for(int j=0;j<col;j++)
        {
           if(ar[i][j]==0)
           {
            count++;
           }
        }
   }
//    printf("%d",count); // to count the number of zero into the matrix
        if (element==count)
        {
            printf("Null Matrix");
        }
        else
        {
            printf("Not Null Matrix");
        }
    return 0;
}


