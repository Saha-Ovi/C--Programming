#include<stdio.h>
void sum(int x)
{
     for(int i=1;i<=x;i++)
    {
        printf("%d",i);
        if(i<x)
        {
            printf(" ");
        }
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    sum(n);

    
    return 0;
}

// #include <stdio.h>

// void printNumbers(int N) {
//     int i;
//     for(i=1; i<=N; i++) {
//         printf("%d ", i);
//     }
// }

// int main() {
//     int N;
//     scanf("%d", &N);
//     printNumbers(N);
//     return 0;
// }






