#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],k,i,sum,d,set=1;
    while(1)
    {
    cin>>n;
    if(n==0)
        break;
        sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    d=sum/n;
    k=0;
     for(i=0;i<n;i++)
     {
         if(a[i]>d)
            k=k+a[i]-d;
     }
     cout<<"Set #"<<set<<endl;
     cout<<"The minimum number of moves is "<<k<<"."<<endl;
     set++;
    }
    return 0;
}
