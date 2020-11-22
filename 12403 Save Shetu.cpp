#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, tk, amount = 0;
    cin >> t;
    while(t--)
    {
        string op;

        cin >> op;
        if(op == "donate")
        {
            cin >> tk;
            amount += tk;
        }
        else if(op == "report")
            cout << amount << endl;

    }
    return 0;
}
