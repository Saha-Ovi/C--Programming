#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",&a,&b);
     int k=strlen(a); // index value is in integer that's why we take the value of k index as integer
     for (int i=0;i<=strlen(b);i++)
     {
        a[k]=b[i]; //inserting the value of b[i] to a[k]
        k++; // icreasing the value of k index
     }
    printf("%s",a);

    
    return 0;
}


