#include<stdio.h>
long long int bigmod(long long int b,long long int p,long long int m)
{
    if(p == 0) return 1 % m;
    long long int x = bigmod(b, p / 2, m);
    x = (x * x) % m;
    if(p % 2 == 1) x = (x * b) % m;
    return x;
}
int main()
{
    long long int b, p, m;
    scanf("%lld\n%lld\n%lld", &b, &p, &m);
    printf("%lld\n",bigmod(b,p,m));

    return 0;
}
