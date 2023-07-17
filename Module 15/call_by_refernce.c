#include<stdio.h>
void sum(int *x)
{
     *x=7;
    
}
int main()
{
    int x=8;
    int *s=&x;
    //  printf("main er - %p\n",s);
    
    sum(s);
    printf("main er - %d\n",x);


    
    return 0;
}

