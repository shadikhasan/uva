#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, r, i;
    cin >> t;
    while(t--)
    {
        cin >> r;
        int s[r],dis = 0,m;

        for(i = 0; i < r; i++)
        {
            scanf("%d", &s[i]);
        }
        sort(s, s + r);
        m = s[r / 2];
        for(i = 0; i < r; i++)
        {
            dis += abs(m - s[i]);
        }
        cout << dis << endl;
    }
    return 0;
}
