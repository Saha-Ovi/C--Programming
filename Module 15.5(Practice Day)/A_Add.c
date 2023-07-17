#include<stdio.h>
int sum(int x,int y)
{
    int s=x+y;
    return s;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);
    int s=sum(x,y);
    printf("%d",s);


    
    return 0;
}


