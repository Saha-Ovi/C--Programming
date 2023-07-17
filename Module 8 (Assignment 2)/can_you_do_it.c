#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,i;
    scanf("%d",&N);
    if(N<=0)
    {
        for(i=N;i<2;i++)
        {
            printf("%d ",i);
        }  
    }
    else if(N>0)
    {
        for(i=1;i<=N;i++)
        {
            printf("%d ",i);
        }  
    }
    
    
    return 0;
}

    
    
    
    
    
    
