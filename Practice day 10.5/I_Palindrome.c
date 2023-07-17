#include<stdio.h>
#include<string.h>
int main()
{
    char a[10001];
    scanf("%s",&a);
    int str=strlen(a);
    int i=0,j=str-1;
    for (i=0;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            printf("NO");
            return 0;

        }
        
    }
    printf("YES");
    return 0;
}


