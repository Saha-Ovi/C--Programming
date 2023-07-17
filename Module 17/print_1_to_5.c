#include<stdio.h>
void sum(int i)
{
    if(i==11) return;
    printf("%d\n",i);
    sum(i+1);

}
int main()
{
    sum(1); 
    return 0;
}


