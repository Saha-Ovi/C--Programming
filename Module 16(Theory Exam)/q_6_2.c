//******************************* Call by Reference************************************

#include<stdio.h>
void sum(int *x,int *y)
{
    *x=*x+3;
    *y=*y+5;
    int value=(*x)*(*y);
    printf("Sum function Value is - %d\n",value);
    
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(&x,&y);
    int value=x*y;
    printf("Main Function Value is - %d\n",value);
    return 0;
}
