#include<stdio.h>
int main()
{
    long long a,b,c,d,l;

    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l) == 5)
    {
        if(a == 0 && b == 0 && c == 0 && d == 0 && l == 0)break;
        long long count = 0;
        for(int x = 0; x <= l; x++)
        {
            if((a*x*x + b*x + c) % d == 0)
                count++;
        }
        printf("%lld\n",count);
    }
    return 0;
}
