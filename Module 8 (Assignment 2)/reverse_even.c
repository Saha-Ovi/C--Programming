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
    for(i=N-1;i>=0;i--)
    {
        if(i%2==0)
        {
            printf("%d ",ar[i]);
        }
        
        
     }
    return 0;
}
