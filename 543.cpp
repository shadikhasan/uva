#include <bits/stdc++.h>
using namespace std;
int a[1000000] = {0};
void sieve()
{
    int n = 1000000;
    int i,j;

    for(i = 2; i < n; i++)
    {
        a[i] = 1;
    }

    for(i = 2; i * i <= n; i++)
    {
        if(a[i] == 1)
        {
            for(j = 2; i * j <= n; j++)
            {
                a[i * j] = 0;
            }
        }
    }
}
int primeit(int n)
{
    if(n < 2) return 0;

    return a[n];
}

int main()
{
    int n, i, flag;
    sieve();
    while(1)
    {
        cin >> n;
        if(n == 0)break;
        flag = 0;
        for(i = 2; i < n/2 + 1; i++)
        {
            if(primeit(i) && primeit(n - i))
            {
                cout << n << " = " << i << " + " << n - i << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << "Goldbach's conjecture is wrong." << endl;

    }
    return 0;
}
