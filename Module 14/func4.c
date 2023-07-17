#include<stdio.h>
//function part with no return type & no parameter
void sum(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    printf("%d",sum);
}



int main()
{
    sum();


    
    return 0;
}


