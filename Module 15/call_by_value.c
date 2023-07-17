#include<stdio.h>
void sum(int x)
{
    // int s=x;
    x=5;
    printf("func er - %d\n",x);
}
int main()
{
    int x=8;
    sum(x);
    printf("main er - %d\n",x);


    
    return 0;
}


