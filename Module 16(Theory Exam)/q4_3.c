//*********************************** No Return + Parameter ************************************

#include<stdio.h>
void swap(int *x,int*y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
    printf("%d %d",*x,*y);

}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *x=&a,*y=&b;
    swap(x,y);
    return 0;
}


