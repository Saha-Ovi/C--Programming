#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]); //ar[i] means i holo indexing.i index wise value rakhe & print kore
    }
    for(i =0;i<n;i++)
    {
        if(ar[i]>0) // i er indexing wise value gulo zero cheye boro  hole 
        {
            ar[i]=1;     //ar[0] means i indexing jokhon 0 tokhon 1 value oi 0 index e chilo bola chilo 
                        // zero cheye boro hole 0 index e 1 rakhte oi value poriborte

          printf("%d ",ar[i]);
        }
        
        else if(ar[i]<0)
        {
            ar[i]=2;
         printf("%d ",ar[i]);
        }
        else if (ar[i]==0)
        {
            ar[i]=0;
            printf("%d ",ar[i]);
        }
    }
  
    
    return 0;
}


