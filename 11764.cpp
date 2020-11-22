#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, tc = 0;
    cin >> t;
    while(t--)
    {
        tc++;
        cin >> n;
        int a[n];
        int h = 0, l = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for(i = 0; i < n - 1; i++)
        {
            if(a[i + 1] > a[i]) h++;
            else if(a[i + 1] < a[i]) l++;
        }

        printf("Case %d: %d %d\n", tc, h, l);

    }
    return 0;
}
