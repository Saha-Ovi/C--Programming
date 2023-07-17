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
    for (i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            //ascending order

            if(ar[i]<ar[j])
            {
                int tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
        } 

    }
    //for prinitng the value
    for (i=0;i<n;i++)
    {
         printf("%d ",ar[i]);
    }
    


    
    return 0;
}
