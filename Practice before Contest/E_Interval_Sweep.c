#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b==0 && a==0)
    {
        printf("YES");
        return 0;
    }
    if(b=a+1 && b>=a)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }



    
    return 0;
}


