#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int N,sum_even=0,sum_odd=0,i;
    scanf("%d",&N);
    int ar[N];
    for(i=1;i<=N;i++)
    {
        scanf("%d",&ar[i]);
    }    
        
    for(i=1;i<=N;i++)
    {
        if(ar[i]%2==0)
        {
            sum_even+=ar[i];
        }
        else if (ar[i]%2==1)
        {
            sum_odd+=ar[i];
        }
    }
  
    printf("%d %d",sum_even,sum_odd);
    return 0;
}
