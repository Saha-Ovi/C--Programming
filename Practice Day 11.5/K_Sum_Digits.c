#include<stdio.h>
int main()
{
    int n,i,digit,sum=0;
    scanf("%d",&n);
    char a[1000001];
    scanf("%s",a);
    for (i=0;i<n;i++)
    {
        digit=a[i]-'0';
        sum=sum+digit;
    }
    printf("%d\n",sum);  
    return 0;
}

















// #include <stdio.h>

// int main() {
//     int n, i, digit, sum = 0;
//     char a[1000005]; // assuming the maximum value of n is 10^6

//     // read the input
//     scanf("%d", &n);
//     scanf("%s", a);

//     // iterate through the digits of the array
//     for (i = 0; i < n; i++) {
//         digit = a[i] - '0'; // convert the character to an integer
//         sum += digit; // add the digit to the sum
//     }

//     // print the result
//     printf("%d\n", sum);

//     return 0;
// }

