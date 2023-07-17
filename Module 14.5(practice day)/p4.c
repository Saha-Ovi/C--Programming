#include<stdio.h>
char small_to_capital(char a)
{
    char b=a-32;
    return b;
}



int main()
{
    char a;
    scanf("%c",&a);
    small_to_capital(a);
    char c=small_to_capital(a);
    printf("%c",c);


    
    return 0;
}


