#include<bits/stdc++.h>
int main()
{
    int n,i,j,p,q,k;
    scanf("%d",&n);
    while(n--)
    {

        scanf("%d\n%d",&p,&q);
        for(k=1; k<=q; k++)
        {
            for(i=1; i<=p; i++)
            {
                for(j=1; j<=i; j++)
                    printf("%d",i);
                printf("\n");
            }
            for(i=p-1; i>=1; i--)
            {
                for(j=1; j<=i; j++)
                    printf("%d",i);
                printf("\n");
            }
            if(k<q)
                printf("\n");
        }
    if(n)
        printf("\n");
    }
    return 0;
}
