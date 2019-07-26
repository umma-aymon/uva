#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i;
      while(scanf("%d%d%d",&a,&b,&c)==3)
        if(a==0&&b==0&&c==0)
            break;
          else if((a*a)+(b*b)==(c*c)||(b*b)+(c*c)==(a*a)||((c*c)+(a*a)==(b*b)))
               cout<<"right"<<"\n";
        else
            cout<<"wrong"<<"\n";
    return 0;
}

