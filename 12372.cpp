#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, tc = 0, l, w, h;
    cin >> t;
    while(t--)
    {
        tc++;

        cin >> l >> w >> h;

        if(l <= 20 && w <= 20 &&  h <= 20)
        {
            printf("Case %d: good\n",tc);
        }
        else
            printf("Case %d: bad\n",tc);
    }
    return 0;
}
