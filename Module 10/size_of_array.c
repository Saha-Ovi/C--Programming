#include<stdio.h>
int main()
{

    char a[7];
    int sz=sizeof(a)/sizeof(char);
    printf("%d",sz);
    return 0;
}

//  sizeof(a) - denotes size of array
// sizeof(char) - denotes size of character
//  int sz=sizeof(a)/sizeof(char); - ekta array te koita value input newa jabe ta jana jai