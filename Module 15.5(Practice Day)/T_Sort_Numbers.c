#include<stdio.h>
void sort_num(int *ar,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
             if(ar[i]>ar[j])
             {
                int tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
             }
        }
       
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }
  
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int ar[3]={a,b,c};
    sort_num(ar,3);

    printf("\n%d\n%d\n%d",a,b,c);

    
    return 0;
}


