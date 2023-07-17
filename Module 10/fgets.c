#include<stdio.h>
int main()
{
    char a[10];
    fgets(a,10,stdin);
    printf("%s",a);

    
    return 0;
}

// fgets er size joto hobe toto print hobe character size matter kore nah
// fgets( array name,size,stdin); ei format e declare korte hoi.
