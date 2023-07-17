#include<stdio.h>
int main()
{
    int alpha;
    char c;
    scanf("%c",&c);
    if(c>=97 && c<122 )
    {
        alpha=c+1;
        printf("%c",alpha);
    }
    else if(c=122)
    {
        printf("%c",97);
    }



    
    return 0;
}


