// https://www.hackerearth.com/code_hunt_13/algorithm/jumping-numbers-1/

#include <bits/stdc++.h>
#define MOD 4294967143U
typedef unsigned int intu;
typedef unsigned long long longu;
longu s1[64],s2[64];
intu pmod(int a, longu n)
{
    intu t;
    longu s;
    s=a;
    t=1;
    while(n)
    {
        if (n&1)
            t=(s*t)%MOD;
        s=(s*s)%MOD;
        n>>=1;
    }
    return t;
}
intu pot(longu n)
{
    longu q;
    intu t1,t2;
    int i;
    t1=1;
    t2=0;
    for(i=0;n;n>>=1,i++)
        if (n&1)
        {
            q=t1;
            t1=(s1[i]*t1%MOD+3*(s2[i]*t2%MOD))%MOD;
            q=s1[i]*t2%MOD+s2[i]*q%MOD;
            if (q>=MOD)
                t2=q-MOD;
            else
                t2=q;
        }
 
    return (94LL*t1+144LL*t2)%MOD;
}
int main()
{
    int t,i;
    longu n;
 
    s1[0]=2;
    s2[0]=1;
    for(i=1;i<64;i++)
    {
        s1[i]=(s1[i-1]*s1[i-1]%MOD+3*(s2[i-1]*s2[i-1]%MOD))%MOD;
        s2[i]=2*(s1[i-1]*s2[i-1]%MOD)%MOD;
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&n);
 
        if (n&1)
        {
            printf("0\n");
            continue;
        }
        n=n-1>>1;
        printf("%llu\n",(21+11LL*pmod(2,n+2)+23LL*pmod(3,n+1)+pot(n))%MOD*1789569643%MOD);
    }
    return 0;
} 
