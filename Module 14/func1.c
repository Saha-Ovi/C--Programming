#include<stdio.h>
//function part with retun type & parameter
int sum(int x,int y)
{
    int s=x+y;
    return s;
    // int sum=x+y;
    // return sum;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",sum(x,y));

    
    return 0;
}


