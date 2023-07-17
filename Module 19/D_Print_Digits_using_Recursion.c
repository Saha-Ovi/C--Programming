#include<stdio.h>
void digit(int n)
{
    if(n==0) return;
    int x=n%10;
    digit(n/10);
    printf("%d ",x);
  
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
       scanf("%d",&n);
       digit(n);
       if(n==0)
       {
            printf("0");
       }
       printf("\n");
    }
    //for one value like 1234 to check wheter the program working or not
    //    int n;
    //    scanf("%d",&n);
    //    digit(n);


    
    return 0;
}


