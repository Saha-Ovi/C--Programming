#include<stdio.h>
int length(char a[],int i)
{
    if(a[i]=='\0') return 0;
    // length(a,i+1);
    int len=length(a,i+1);
    return len+1;



}
int main()
{
    char a[101];
    scanf("%s",a);
    length(a,0);
    int len=length(a,0);
    printf("%d",len);
  
    return 0;
}
