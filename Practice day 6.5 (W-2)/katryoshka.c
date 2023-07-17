#include<stdio.h>

int main()
{
    long long e,m,b,ans;
    scanf("%lld %lld %lld",&e,&m,&b);
    long long min=0;
    if(e<=b && e<=m )
    {
        min=e;
    }
   else if(b<=e && b<=m )
    {
        min=b;
    }
    else{
        min=m;
    }
    e=e-min;
    b=b-min;
    m=m-min;
    ans=min;

    if(e/2<b)
    {
        ans+=e/2;
    }
    else
    {
        ans+=b;
    }
    printf("%lld",ans);

    
    return 0;
}


