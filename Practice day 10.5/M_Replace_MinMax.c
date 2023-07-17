#include<stdio.h>
int main()
{
    int n,i,min=100001,max=-100001;
    scanf("%d",&n);
    int ar[n];

    for (int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        
     if(ar[i]<min)
    {
        min=ar[i];
    }
    if(ar[i]>max)
    {
        max=ar[i];
    }

    }
   
    for(i=0;i<n;i++)
    {
        if(ar[i]==max)  // max replace by min number
        {
            ar[i]=min;
        }
        else if(ar[i]==min)  /// min number replace by max number
        {
            ar[i]=max;
        }
        printf("%d ",ar[i]);
    }
    return 0;
}  
















































// #include<stdio.h>
// int main()
// {
//     int a,i,b[100000],min=100001,max=-100001;
//     scanf("%d",&a);
//     for(i=0;i<a;i++){
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<a;i++){
//         if(b[i]<min){
//             min = b[i];
//         }
//         if(b[i]>max){
//             max = b[i];
//         }
//     }
//     for(i=0;i<a;i++){
//         if(b[i]==max){
//             b[i]=min;
//         }
//         else if(b[i]==min){
//             b[i]=max;
//         }
//         printf("%d ",b[i]);

//     }
//     return 0;
// }


































