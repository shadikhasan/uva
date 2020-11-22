#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000],t[100000];
    while(scanf("%s %s",s,t) != EOF)
    {
        int l1,l2,i,j,d;
        l1 = strlen(s);
        l2 = strlen(t);
        d = 0;
        int found = 0;
        for(i = 0; i < l1; i++)
        {
            for(j = d; j < l2; j++)
            {
                if(s[i] == t[j])
                    {
                        found++;
                        d = j + 1;
                        break;
                    }
            }
        }
        if(found == l1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
