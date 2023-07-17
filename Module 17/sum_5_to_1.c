#include<stdio.h>
void sub(int i)
{
    if(i==0) return;
    printf("%d\n",i);
    sub(i-1);
}
int main()
{
    sub(10);
    return 0;
}


