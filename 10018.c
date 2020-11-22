#include<stdio.h>
long long revnumber(long long n)
{
    long long m = 0;
    while(n != 0)
        {
            m = m * 10 + n % 10;
            n /= 10;
        }
    return m;
}
int main()
{
    int t;
    //printf("%d",revnumber(123456789));
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
        printf("%lld %lld\n",addcount,n);
    }
    return 0;
}
