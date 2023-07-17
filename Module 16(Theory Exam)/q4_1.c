//**************************** Has Return + Parameter *****************************************
#include<stdio.h>
int sum(int x,int y)
{
    int sum=x*y;
    return sum;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b); 
    sum(a,b);
    int value= sum(a,b);
    printf("The value of sum is - %d",value);  

    
    return 0;
}


