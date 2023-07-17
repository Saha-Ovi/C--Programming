#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    scanf("%s %s",&a,&b);
    int str=strlen(a);
    int str1=strlen(b);
    printf("%d %d\n",str,str1);
    strcat(a,b);
    printf("%s\n",a);

        char tmp=a[0];
        a[0]=b[0];
        b[0]=tmp;
        
    printf("%s %s",a,b);
    return 0;
}


