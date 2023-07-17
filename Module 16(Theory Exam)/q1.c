#include<stdio.h>
int main()
{
    int n,s,i,k;
    scanf("%d",&n);
    s=n-1; //space 
    k=1; // for number 
    for(i=1;i<=(2*n)-1;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" "); //space counting
        }
        for (int j=1;j<=k;j++)
        {
            printf("%d",j); //number printing
        }
        if(i<=n-1)  // if i value is n-1 print that
        {
            s--;
            k=k+2; 
        }
        else // if i value greater than n-1 then print that
        {
            s++;
            k=k-2;
        }
        printf("\n"); // after one work or one line complete print new line
    }


    
    return 0;
}


