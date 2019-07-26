#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    long a,b,c;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        cout<<"Case "<<i<<": ";
        if(a>0 && b>0 && c>0)
        {
            if(a+b<=c || b+c<=a || c+a<=b)
                cout<<"Invalid\n";
            else if(a==b && b==c)
                cout<<"Equilateral\n";
            else if(a==b || b==c  || c==a)
                cout<<"Isosceles\n";
            else
                cout<<"Scalene\n";
        }
        else
            cout<<"Invalid\n";
    }
    return 0;
}
