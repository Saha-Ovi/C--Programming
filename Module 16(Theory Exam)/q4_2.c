//************************************ Has Return + No Parameter ************************************
#include<stdio.h>
int sum()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int add=x+y;
    return add;
}
int main()
{
    int value = sum();
    if(value%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }  
    return 0;
}


