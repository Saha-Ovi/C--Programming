#include<stdio.h>
int main()
{
    int test,w,h;
    scanf("%d",&test);
  
   int i=1;
    while(i<=test)
    {
    scanf("%d %d",&w,&h);
        if(w==h)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
        i++;
    }

    return 0;
}

// ********************************** Second Way *********************************************

//     for(int i=1;i<=test;i++)
//   {
//       scanf("%d %d",&w,&h);

//       if(w==h)
//       {
//         printf("Square\n");
//       }
//       else{
//           printf("Rectangle\n");
//       }