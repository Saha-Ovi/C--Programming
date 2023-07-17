#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min=ar[0];
    int freq=1;
    for(int i=1;i<n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
            freq=1;
        }
        else if(ar[i]==min)
        {
            freq++;

        }
    }
    if(freq % 2==1)
    {
        printf("Lucky");
    }
    else 
    {
        printf("Unlucky");
    }


    
    return 0;
}


