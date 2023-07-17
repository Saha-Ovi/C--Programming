#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    char t[1001];
    scanf("%s",&s);
    scanf("%s",t);
    int str=strlen(s);
    int str1=strlen(t);
    printf("%d %d\n",str,str1);
    printf("%s %s",s,t);


    
    return 0;
}


