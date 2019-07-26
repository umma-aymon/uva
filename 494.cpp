#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int i,c,temp;
    while(gets(s))
    {
        c=0;
        temp=0;
        for(i=0; i<strlen(s); i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            {
                if(!temp)
                c++;
                temp=1;
            }
            else
                temp=0;
        }
        cout<<c<<endl;
    }
    return 0;
}
