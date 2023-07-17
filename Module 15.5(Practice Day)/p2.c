#include<stdio.h>
#include<string.h>
//******print in Function********
// void my_len(char *b)
// {
//     // *********Without using Strlen Function*******
//     int count=0;
//     while(b[count]!='\0')
//     { 
//         count++;
    
//     }
//     printf("length of string is - %d",count);

//     //******Using Strlen Function********* 
//     // int n=strlen(b);
//     // printf("length of string is - %d",n);
// }
// **********print in main function******
int my_len(char *b)
{
    // *********Without using Strlen Function*******
    int count=0;
    while(b[count]!='\0')
    { 
        count++;
    
    }
    return count;
    

    //******Using Strlen Function********* 
    // int n=strlen(b);
    // printf("length of string is - %d",n);
}
int main()
{
    char a[7];
    scanf("%s",&a);
    my_len(a);
    int b=my_len(a);
    printf("length of string is - %d",b);



    
    return 0;
}



