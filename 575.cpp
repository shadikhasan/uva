#include <bits/stdc++.h>

using namespace std;
long long int skewbinary(string n)
{
    long long int sB = 0, d;
    int i, j = 1, l;
    l = n.size();
    for(i = l - 1; i >= 0; i--)
    {
        d = pow(2, j) - 1;
        sB += (n[i] - 48) * d;
        j++;
    }

    return sB;
}
int main()
{
    string n;
    while(1)
    {
        cin >> n;
        if(n == "0")break;

        cout << skewbinary(n) << endl;
    }

}
