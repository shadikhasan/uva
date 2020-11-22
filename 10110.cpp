#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sq;
    while(1)
    {
        cin >> n;

        if(n == 0)break;
        sq = sqrt(n);
        if((sq * sq) == n ) cout << "yes" << endl;
        else
            cout << "no" << endl;

    }
    return 0;
}
