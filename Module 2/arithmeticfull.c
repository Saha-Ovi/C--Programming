#include <stdio.h>
int main()
{

    int a,b,add,sub,cross,div,mod;
    scanf("%d %d",&a,&b);
    add=a+b;
    sub=a-b;
    cross=a*b;
    div=a/b;
    mod=a%b;
    printf("\n%d \n%d \n%d \n%d \n%d",add,sub,cross,div,mod);

    return 0;
}