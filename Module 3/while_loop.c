#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d ",i);
        if(i%5==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }
    return 0;
}
