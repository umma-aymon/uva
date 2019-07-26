#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,sum,i,j,d[3655],pr[105],k;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&p);
        for(j=1; j<=p; j++)
            scanf("%d",&pr[j]);
            for(j=1;j<=n;j++)
            d[j]=0;
            for(j=1;j<=p;j++)
            {
                for(k=1;k<=n;k++)
                    if(k%pr[j]==0)
                    d[k]=1;
            }
            sum=0;
            for(j=1;j<=n;j++)
            {
            if(j%7==0||j%7==6)
                continue;
                if(d[j]==1)
                sum++;
            }
        cout<<sum<<endl;
    }
}
