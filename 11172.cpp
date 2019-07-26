#include<bits/stdc++.h>
int main()
{
    long long a,b,t;
    scanf("%d",&t);
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}
