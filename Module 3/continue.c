#include<stdio.h>
int main()
{ 

    int i,n;
    scanf("%d",&n);
    for (i=1;i<=n;i+=1)
    {
        
        if (i==17)
        {
            continue;
        }
        printf("%d\n",i);
        
        
    }
    




    return 0;
}