#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    string s,s1,s2,s3;
    int a[10000];
    int b[10]={0, 1, 3, 2, 6, 4 , 5};
	int ans=0;
    int sum=0,n,m,i,c,d,e;
	while(cin>>s)
{
    
    ans=0;
	sum=0;
    for(i=0;i<s.size();i++)
    {
        a[i+2]=s[i]-'0';
        sum=sum+a[i+2];
    }
    m=s.size()+1;
    for(i=1;i<=m;i++)
    {
        if(a[i]==1)
            ans++;
        if(a[i]==2 && a[m]%2==0)
            ans++;
        if(a[i]==3 && sum%3==0)
            ans++;
        if(a[i]==4 && (a[m]+a[m-1]*10)%4==0)
            ans++;
        if(a[i]==5 && a[m]%5==0)
            ans++;
        if(a[i]==6 && sum%3==0 && a[m]%2==0)
            ans++;
        if(a[i]==8 && (a[m]+10*a[m-1]+100*a[m-2])%8==0)
            ans++;
        if(a[i]==9 && sum%9==0)
            ans++;
        if(a[i]==7)
        {
            c=1;
            d=m;
            e=0;
            while(d>1)
            {
                e=e+a[d]*b[c];
                c++;
                d--;
                if(c>6)
                    c=1;
                
            }
            if(e%7==0)
                ans++;
        }
   }
   cout<<ans<<endl;
}
   return 0;
}

    