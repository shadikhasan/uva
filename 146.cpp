#include <bits/stdc++.h>

using namespace std;

int main()
{
        string s; // id denoted by s

        while(cin >> s, s != "#")
        {
            if(next_permutation(s.begin(), s.end()))
                cout << s << endl;
            else
                cout << "No Successor\n";
        }
        return 0;
}
