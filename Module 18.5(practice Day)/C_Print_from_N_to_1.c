#include<stdio.h>
void show(int n)
{
    //base case
    if(n==0) return;
    //printing without space in last line
    if(n==1)
    {
         printf("%d",n);
    }
 else
 {
     printf("%d ",n);
 } 
    show(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    show(n);
    return 0;
}


