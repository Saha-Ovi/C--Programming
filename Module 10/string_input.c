#include<stdio.h>
int main()
{
    char a[6];
    scanf("%s",&a);
    printf("%s\n",a);
    int sz=sizeof(a)/sizeof(char); ///array size with null value
    printf("%d",sz); 

    
    return 0;
}


