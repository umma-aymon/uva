#include<stdio.h>
int main()
{
    unsigned int n,i,sum=0;
    while(scanf("%u",&n)!=0)
    {
        for(i=0;i<=(n/2);i++)
        {
            if(n%i==0)
            sum=sum+i
        }
    }
    printf("PERFECTION OUTPUT\n");

}
