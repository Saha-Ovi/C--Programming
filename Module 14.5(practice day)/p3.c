#include<stdio.h>

int char_to_ascii(char a)
{
    int c=a;
    return c;

}
int main()
{
    char a;
    scanf("%c",&a);
    char_to_ascii(a);
    int c=char_to_ascii(a);
    printf("%d",c);

// printf("%d",char_to_ascii(a)); 13,14,15 line er kaj ekai ei printf korte parbe



    
    return 0;
}


