#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)  // n size array input
    {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<n;i++)  /// m size array input
    {
        scanf("%d",&b[i]);
    }
    int ans[n+m]; // third array required for store the value of previous two array
    for (int i=0;i<n;i++)
    {
        ans[i]=a[i];  // store value of a[i] into new array ans
    }
    int i=n;   // for controlling i outside of loop

    for (int j=0;j<m;j++) /// for controlling the assign of the value of b[i]
    {
        ans[i]=b[j]; //store value of b[j] into new array ans where j is 0,1,2... & i is n=5 (the size of n)
        i++;
    }
    
    for (i=0;i<n+m;i++)
    {
        printf("%d ",ans[i]);
    }
    
    return 0;
}


