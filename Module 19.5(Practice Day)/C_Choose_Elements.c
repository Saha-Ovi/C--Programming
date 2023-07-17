#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int ar[n];

    // value input in array
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    // sorting
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(ar[i]<ar[j])
            {
                int tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
        }
    }
    //to check the sum

    long long int sum=0;
    for(int i=0;i<k;i++)
    {
        if(sum+(ar[i])>sum)
        {
            sum=sum+(ar[i]);
        }
        
    }
    printf("%lld",sum);

    return 0;
}

// if(ar[i]<0)
//         {
//             break;
//         }

