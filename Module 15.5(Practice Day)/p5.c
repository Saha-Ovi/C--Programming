#include<stdio.h>
void swap_it(int *x,int *y)
{
    
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int *a,*b;
    a=&x;
    b=&y;
    swap_it(a,b);
    printf("%d %d",x,y);


    
    return 0;
}


