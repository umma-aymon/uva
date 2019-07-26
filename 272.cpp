#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0,i;
    while(getline(cin,s))
    {
        int len=s.length();
        char ch= {'"'};
        for(i=0; i<len; i++)
        {
            if(s[i]==ch)
            {
                c++;
                if(c%2)
                    cout<<"``";
                else
                    cout<<"''";
            }
            else
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
