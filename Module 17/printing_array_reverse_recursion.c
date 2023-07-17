#include<stdio.h>
void value(int ar[],int n,int i)
{
    if(i==n) return; 
//*****************Printing array reverse*********************
    value(ar, n,i+1);
     printf("%d ",ar[i]);
  

}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    value(ar,n,0);

    
    return 0;
}
