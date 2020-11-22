#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
    char s[100000];
    int t, a[53];

    memset(a, 0, sizeof(a));

    scanf("%d", &t);

    getchar();

    while (t--)
    {
        gets(s);

        int l = strlen(s);
        for (int i = 0; i < l; i++)
        {
            if (s[i]> 64 && s[i] <91)
                a[s[i]]++;
            else if (s[i]> 96 && s[i] <123)
                a[s[i]-32]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        int max = 0;
        for (int j = 65; j <91; j++)
            if (max < a[j])
                max = a[j];
        if (max == 0)
            break;
        for (int j = 65; j < 91; j++)
        {
            if (max == a[j])
            {
                printf("%c %d\n", j, max);
                a[j] = 0;
            }
        }
    }
    return 0;
}
