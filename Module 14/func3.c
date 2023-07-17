#include<stdio.h>
//function part with no return type & parameter
void sum(int x,int y)
{
    int s=x+y;
    printf("%d",s);

}



int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
   

    
    return 0;
}


