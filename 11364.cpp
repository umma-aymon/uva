#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[1000],i,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            cin>>ar[i];
        sort(ar,ar+n);
        d=ar[n-1]-ar[0];
        cout<<(d*2)<<endl;
    }
    return 0;
}
