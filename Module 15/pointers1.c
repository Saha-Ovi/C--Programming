#include<stdio.h>
int main()
{
    double a=5.30;
    double *ptr1=&a;
    double *ptr2=ptr1;
    *ptr2=100.3025;
    printf("a er value - %lf\n",a);
    printf("ptr1 er value - %lf\n",*ptr1);
    printf("ptr2 er value - %lf",*ptr2);


    
    return 0;
}


































// 1 no. program

// #include<stdio.h>
// int main()
// {
//     double a=5.26;
//     printf("a er value-%lf\n",a);
//     double *ptr=&a;
//     *ptr=10.26;
//     printf("a er second value-%lf",a);


//     return 0;
// }


