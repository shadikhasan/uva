#include <bits/stdc++.h>
using namespace std;
long long revnumber(long long n)
{
    long long x,m = 0;
    while(n != 0)
        {
            x = n % 10;
            n /= 10;

            m = m*10 + x;
        }
    return m;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,m,addcount = 0;
        scanf("%lld",&n);
        while(1)
        {
            m = revnumber(n);
            if(n == m)break;

            n += m;
            addcount++;
        }
        printf("%d %lld\n",addcount,n);
    }
    return 0;
}

