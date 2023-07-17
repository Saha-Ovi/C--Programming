#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    float p;
    scanf("%f",&p);
   float price= p / (1 - (x/100.0));
   printf("%0.2f",price);


    
    return 0;
}


