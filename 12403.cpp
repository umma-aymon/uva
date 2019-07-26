#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,sum=0;
   string s;
    cin>>t;
    while(t--)
    {
        m=0;
        cin>>s;
        if(s=="donate")
        {
             cin>>m;
             sum=sum+m;
        }
           else
            cout<<sum<<endl;
    }
    return 0;
}
