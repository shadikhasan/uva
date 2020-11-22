#include <stdio.h>
int sum(long long int n)
{
    int a,r=0;
    while(n!=0)
    {
        a = n % 10;
        r = r + a;
        n = n / 10;
    }
    return r;
}
int main()
{
    int a,b,c;
    long long int n;
    while ( scanf("%lld",&n) == 1)
    {

        if(n == 0)
            break;

        a = sum(n);
        b = sum(a);
        c = sum(b);

        printf("%d\n",c);
    }



    return 0;
}
