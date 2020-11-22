#include <bits/stdc++.h>

using namespace std;

int ct[26];
int main()
{
    string s;
    int n, i;
    cin >> n;
    while(n--)
    {
        cin >> s;

        for(i = 0; i < ; i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= 'A' && s[i] <= 'Z'))
            {
                ct[s[i] - 'a']++;
            }
        }
        for(i = 0; i < 26; i++)
        {
            if(ct[i] != 0)
            {
                printf("%c = %d\n",'a' + i, ct[i]);
            }
        }
    }
    return 0;
}
