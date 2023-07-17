#include <stdio.h>

int main() {
    int n, m, i, num;
    int count[100005] = {0}; // assuming the maximum value of M is 10^5
    // initialize the count array with all zeros

    // read the input
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        count[num]++; // increment the count of the corresponding number
    }

    // print the output
    for (i = 1; i <= m; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}