#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n); //array size
    int ar[n+1];
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]); // array vitore value input
    }
        int pos,value;
        scanf("%d %d",&pos,&value); //position & value input

        for(i=n;i>=pos+1;i--) //loop for sending value from left to right
        {
            ar[i]=ar[i-1];

        }
      ar[i]=value; //postion e value assign kore fela
    for(i=0;i<=n;i++)
    {
        printf("%d ",ar[i]);
    }


    
    return 0;
}


