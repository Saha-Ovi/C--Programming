#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int *p=&a;
    *p=150;
    printf("%d",*p);


    
    return 0;
}


