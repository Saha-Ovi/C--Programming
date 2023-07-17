#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&a);
    int ans=-1;
    for(i=0;i<n;i++)
    {
        if(ar[i]==a)
        {
           ans=i;
            break;
        }
        
       
    }
     printf("%d",ans);
        
        
       
    

    
    return 0;
}
 
