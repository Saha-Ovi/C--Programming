#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int ar[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]); //value input in array
    }
    int pos;
    scanf("%d",&pos); //to know the positon of array index value to be removed
    for(i=pos;i<n-1;i++)
    {
        ar[i]=ar[i+1];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);  //array output
    }    
    return 0;
}
// i<n-1 nah dile jokhon ar[i]=ar[i+1] tokhon 4 th index e ekta grabage value add hobe nah

// i<n  dile jokhon ar[i]=ar[i+1] tokhon 4 th index e ekta grabage value add hobe
