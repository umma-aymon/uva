#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,L,W,H,i;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>L>>W>>H;
        if(L<=20&&W<=20&&H<=20)
            cout<<"Case "<<i<<": good"<<"\n";
        else
            cout<<"Case "<<i<<": bad"<<"\n";
    }
    return 0;
}
