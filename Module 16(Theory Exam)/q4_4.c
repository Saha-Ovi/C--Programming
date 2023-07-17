//**************************************** No Return + No Parameter *******************************

#include<stdio.h>
void prime()
{
    int a,d=0,i,flag=0;
    scanf("%d",&a); //prime number input
    d=a/2;
    //0 and 1 are not considered as a prime number
    //only 2 is the even prime number &the rest of other prime number is odd  
    for(i=2;i<=d;i++) 
    {
        if(a%i==0) // here the value of i is 2 so checking a%2==0 or not
         
        {
            printf("This is not a prime number\n");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("This is a prime number\n");
    }
}
int main()
{
    prime();
    return 0;
}


