#include<stdio.h>
int main()
{
    
    char a[]="ovi"; //gurantte for null value in last position
    printf("%s\n",a); 
    int sz=sizeof(a)/sizeof(char); ///array size with null value
    printf("%d",sz); 
    return 0;
}
// // char a[7]={'o','v','i','s','a','h','a'};// no gurantte for null value in last position
    // for(int i=0;i<3;i++)
    // {
    //     printf("%c",a[i]);
    // }


   // char a[7]={'o','v','i','s','a','h','a'}; ei bhabe array er moto kore initialize kora jai
//    char a[]="ovi"; eta hocche string er super power je character value secpnd quotation vitore new jai
// printf("%s\n",a); loop use na kore o ei %s diye string value print kora jai null character shoho.