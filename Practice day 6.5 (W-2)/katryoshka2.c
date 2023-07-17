#include<stdio.h>
int main()
{
    long long e,m,b,ans;
    scanf("%lld %lld %lld",&e,&m,&b);
    long long min=0;
     if(e/2<b)
    {
        min=e/2;
    }
    else
    {
        min=b;
    }
    e=e-min;
    b=b-min;
    ans=min;
    if(e<=b && e<=m )
    {
        ans+=e;
    }
   else if(b<=e && b<=m )
    {
        ans+=b;
    }
    else{
        ans+=m;

    }
    
    printf("%lld",ans);

    
    return 0;
}


