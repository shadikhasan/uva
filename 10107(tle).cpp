#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, result;
    vector <int> v;
    while(1)
    {
        cin >> n;
        if(n == EOF)break;
        v.push_back(n);

        sort(v.begin(), v.end());

        k = v.size() / 2;

        if(v.size() % 2 == 0)
        {
            result = (v[k] + v[k-1]) / 2;
        }
        else
            result = v[k];

        cout << result << endl;
    }
    return 0;
}
