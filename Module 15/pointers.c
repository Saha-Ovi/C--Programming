#include<stdio.h>
int main()
{
    int a=100;
    // scanf("%d",&a);
    int *p;
    p=&a;
    int *ptr=p;
   // ptr=p; // p er value rakhchi ultimate a er address ei rakhlam
    *ptr=500;
    // *p=500;
    // printf("%d",*p);
    // printf("address of a-%p\n",&a);
    // printf("address of p-%p\n",p);
    // printf("address of ptr-%p",ptr);
    printf("%d",a);



    
    return 0;
}


