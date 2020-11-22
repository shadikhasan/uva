#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll nCr(int n, int r)
{
    ll p = 1; /// p holds the value of n(n-1)(n-2)(n-3)......1
    ll k = 1; /// k holds the value of r(r-1)(r-2)(r-3)......1

    if(n - r < r)
        r = n - r;
    if(r != 0)
    {
        while(r)
        {
            p *= n;
            k *= r;

            ll g = __gcd(p, k);

            p /= g;
            k /= g;

            n--;
            r--;
        }
    }
    else
        p = 1;

    return p;
}
int main()
{
    int n, m;

    while(1)
    {
        cin >> n >> m;
        if(n == 0 && m == 0)break;

        cout << n << " things taken " << m << " at a time is " << nCr(n, m) << " exactly." << endl;
    }
    return 0;
}
