#include<stdio.h>
int main()
{
    int i,j,T,sum,a,b,m;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        m=0;
        for(j=a;j<=b;j++)
        {
            m=j%2;
            if(m!=0)
            sum=sum+j;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
