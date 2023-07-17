#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col];
    for (int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int x,flag=0;
    scanf("%d",&x);
    for (int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(x==ar[i][j])
            {
                flag=1;
                
            }
        //     else if(x!=ar[i][j])
        //     {
        //          printf("will take number");
        //     }
        // }
    }

    }

    if(flag==1)
    {
        printf("will not take number");
    }
    else
    {
         printf("will take number");
    }
    
   
    return 0;
}


