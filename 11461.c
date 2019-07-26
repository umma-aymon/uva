#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,s,c;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==0&&b==0)
            break;
        c=0;
        for(i=a;i<=b;i++)
        {
            s=sqrt(i);
            if(s*s==i)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
