#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]<=10)
        {
            printf("A[%d] = %d\n",i,ar[i]);

        }
        
    }

    
    return 0;
}


//A[%d] ,i mane i er value ar vitore print korchi
//%d,ar[i] mane ar[i] er eikhane index value against e jei value seita printt korchi