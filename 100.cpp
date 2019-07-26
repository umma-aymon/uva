#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,count,max,temp,c;
    while(scanf("%d%d",&i,&j)==2)
    {
        cout<<i<<" "<<j<<" ";
        if(i>j)
        {
            temp=i;
            i=j;
            j=temp;
        }
        max=0;
        for(k=i; k<=j; k++)
        {
            count=1;
            int n=k;
            while(n!=1)
            {
                count++;
                if(n%2!=0)
                    n=3*n+1;
                else
                    n=n/2;
            }
            if(max<=count)
                max=count;
        }
        cout<<max<<endl;
    }
    return 0;
}
