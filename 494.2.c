#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,l,count;

    while(gets(s))
    {
        count = 0;
        l = strlen(s);
        for(i = 0; i <= l; i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                count++;
                while((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                    i++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
