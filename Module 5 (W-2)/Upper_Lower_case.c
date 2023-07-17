#include<stdio.h>
int main()
{
    char a;
    int ans;
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {

        ans=a+32;
        printf("%c",ans);
    }
    else 
    {
       ans=a-32;
        printf("%c",ans);
    }

    
    return 0;
}


