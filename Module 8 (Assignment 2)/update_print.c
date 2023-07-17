#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int N,i;
    scanf("%d",&N);
    int ar[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&ar[i]);
    }
   int x,v;
    scanf("%d %d",&x,&v);
    for(i=0;i<N;i++)
    {
        if(i==x)
        {
            ar[i]=v;
        }
    }
    for(i=N-1;i>=0;i--)
    {
        printf("%d ",ar[i]);
    }
        
        
    return 0;
}
