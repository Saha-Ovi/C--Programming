#include<stdio.h>
int main()
{
    int a,b,c,d,ans1,ans2,ans3,ans4,ans5,ans6;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    ans1=a+b*c;
    ans2=a*b+c;
    ans3=a-b*c;
    ans4=a*b-c;
    ans5=a+b-c;
    ans6=a-b+c;
    if(ans1==d||ans2==d||ans3==d||ans4==d||ans5==d||ans6==d)
    {
        printf("YES");

    }

    else
    {
        printf("NO");

    }
    
    return 0;
}


