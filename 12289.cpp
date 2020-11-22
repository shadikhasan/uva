#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[6];
    int t, i;
    cin >> t;
    while(t--)
    {
        cin >> s;
        int f = 0;
        if(strlen(s) == 5)printf("3\n");
        else
        {
            if(s[0] == 'o') f++;
            if(s[1] == 'n') f++;
            if(s[2] == 'e') f++;

            if(f >= 2)printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}
