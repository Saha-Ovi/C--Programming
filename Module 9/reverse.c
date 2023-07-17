#include<stdio.h>
int main()
{
    int n,tmp;
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int i=0;
    int j=n-1;
    while(i<j) /// two pointes technique has been started
    {
        tmp=ar[i];
        ar[i]=ar[j];
        ar[j]=tmp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }

    
    return 0;
}


