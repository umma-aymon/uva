#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10];
    int i,l,n;
    cin>>n;
    getchar();
    for(i=1; i<=n; i++)
    {
        cin>>s;
        l=strlen(s);
        if(l==3)
        {
            if(s[0]=='o'&&s[1]=='n'|| s[0]=='o'&& s[2]=='e' || s[1]=='n'&&s[2]=='e')
                cout<<"1\n";
            else
                cout<<"2\n";
        }
        else
            cout<<"3\n";
    }
    return 0;
}
