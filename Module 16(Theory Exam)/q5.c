#include<stdio.h>
#include<string.h>
int is_palindrome(char *ar)
{
    int palindrome=1,i,j;
    int str=strlen(ar);
    i=1;
    j=str-1;
    for(i=0;i<j;i++,j--)
    {
        if(ar[i]!=ar[j])
        {
            palindrome=0;

        }
    }
    return palindrome;
}
int main()
{
    char ar[1001];
    scanf("%s",ar);
    is_palindrome(ar);
    int sum= is_palindrome(ar);
    if(sum==1)
    {
        printf("Palindrome");
    }
    else 
    {
        printf("Not Palindrome");
    }
    return 0;
}


