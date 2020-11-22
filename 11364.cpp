#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, x, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector <int> v;
        for(i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }

        cout << (*max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end()) ) * 2 << endl;
    }
    return 0;
}
