#include<bits/stdc++.h>
int main()
{
    long long a,b,d;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(a>b)
            d=a-b;
        else
            d=b-a;
        printf("%lld\n",d);
    }
    return 0;
}
