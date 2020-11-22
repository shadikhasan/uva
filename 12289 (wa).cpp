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
        if(strlen(s) == 3)
        {
             for(i = 0; i < 3; i++)
                {
                    if(s[i] == 't')
                    {
                      for(int j = 0; j < 3; j++)
                      {
                          if(s[j] == 'w' || s[j] == 'o')
                          {
                              printf("2\n");
                              break;
                          }
                      }
                    }
                    else
                        printf("1\n");break;
                }
        }
        else
            printf("3\n");

    }
    return 0;
}
