#include<stdio.h>
void sum (int *ar,int n)
{

    for(int i=0;i<n;i++)
{
    printf("%d ",ar[i]);
} 

}
int main()
{  int n;
scanf("%d",&n);
int ar[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&ar[i]);
} 
  sum(ar,n);
return 0;
}

// 2nd Way 

// #include<stdio.h>
// void sum(void)
// {
//     int ar[5];
//     for (int i=0;i<5;i++)
//     {
//         scanf("%d ",&ar[i]);
//     }
//      for (int i=0;i<5;i++)
//     {
//         printf("%d",ar[i]);
//     }


// }
// int main()
// {
   
//     sum();



    
//     return 0;
// }

