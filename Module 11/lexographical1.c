#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    int i=0;
    while (1)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("same\n");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("A is small\n");
            break;

        }
        else if (b[i]=='\0')
        {
            printf("B is small\n"); // to check whetre a is equal to b or less or bigger(means B is less) 
            break;

        }



        if (a[i]==b[i])
        {
            i++;
        }
        else if (a[i]<b[i])
        {
            printf("a is small\n");
            break;
        }
        else
        {
            printf("b is small\n");
            break;
        }

    }
    

    
    return 0;
}


