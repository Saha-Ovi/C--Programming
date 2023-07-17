#include<stdio.h>
#include<stdlib.h>
void my_abs(int x)
{
    //***wihtout using absolute function***
    if(x>=0)
    {
        printf("%d",x);
    }
    else if(x<0)
    {
        printf("%d",(x*-1));
    }

    //****using absolute function****
    // int s=abs(x);
    // printf("%d",s);
}
int main()
{
    int n;
    scanf("%d",&n);
    my_abs(n);

   return 0;
}


