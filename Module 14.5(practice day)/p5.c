#include<stdio.h>
char capital_to_small(char a)
{
    char b=a+32;
    return b;
}



int main()
{
    char a;
    scanf("%c",&a);
    capital_to_small(a);
    char c=capital_to_small(a);
    printf("%c",c);


    
    return 0;
}