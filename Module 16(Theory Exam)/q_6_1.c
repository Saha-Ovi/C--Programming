
//**************************************** Call by Value *****************************************

#include<stdio.h>
void sum(int x,int y)
{
    x=x+1;
    y=y+1;
    int value=x * y;
    printf("Sum function Value is - %d\n",value);
    
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);
    int value=x*y;
    printf("Main Function Value is - %d\n",value); 
    return 0;
}


