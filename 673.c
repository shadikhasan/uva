#include<stdio.h>
#include<string.h>
int main()
{
    char s[129];
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int f1 = 0,f2 = 0,t1 = 0, t2 = 0;
        scanf("%s",s);
        int l = strlen(s);
        for(int i = 0; i < l; i++)
        {
            if(s[i] == '(') f1++;
            else if(s[i] == '[') t1++;
            else if(s[i] == ')') f2++;
            else if(s[i] == ']') t2++;
        }
        if(f1 == f2 && t1 == t2)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
