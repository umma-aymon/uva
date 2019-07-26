#include<bits/stdc++.h>
int main()
{
    int n,i,j,k,l[55],t,c;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=1; j<=n; j++)
            scanf("%d",&l[j]);
        c=0;
        for(k=1; k<n; k++)
            for(j=k+1; j<=n; j++)
                if(l[j]<l[k])
                    c++;
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}
