#include<bits/stdc++.h>
int main()
{
    char s[10];
    int i=1;
    while(1)
    {
        gets(s);
        if(s[0]=='*')
            break;
        printf("Case %d: ",i);
        i++;
        // if(!strcmp(s,"Hajj"))
        // or
        if(strcmp(s,"Hajj")==0)
            printf("Hajj-e-Akbar\n");
        else
            printf("Hajj-e-Asghar\n");
    }
    return 0;
}
