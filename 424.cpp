/*424 - Integer Inquiry*/
#include <bits/stdc++.h>
#define charToInt(c)(c - '0')
using namespace std;
int main()
{
    string s;
    long long sum;
    while(1)
    {
        cin >> s;

        for(int i = 0; i < s.length(); i++)
        {
            int a = charToInt(s[i]);

            //sum digits
            sum += a;
        }
        vector<string> v;
        v.push_back(sum);
        if(s == "0")
        {
            cout << accumulate(v.begin(), v.end(), 0);
            break;
        }


    }
    return 0;
}
