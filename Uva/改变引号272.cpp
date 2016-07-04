#include<bits/stdc++.h>
int main()
{
    int a,ok=0;
    while((a=getchar())!=EOF)
    {
        if(a=='"'&&ok==0){ok=1;printf("``");continue;}
        if(a=='"'&&ok==1){ok=0;printf("''");continue;}
        else{printf("%c",a);}
    }
    return 0;
}

