#include<bits/stdc++.h>
int main()
{
    double n,p,k;
    int k1;
    while(scanf("%lf%lf",&n,&p)==2){
    k=pow(p,(1/n));
    printf("%.0lf\n",k);
    }
    return 0;
}
