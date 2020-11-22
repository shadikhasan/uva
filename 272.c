#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    int count = 0;

    while(scanf("%c",&ch) != EOF)
    {
        if(ch == '"')
        {
            count++;
            if(count % 2)
            {
                printf("``");
            }
            else
                printf("''");
        }
        else
            printf("%c",ch);
    }
    return 0;
}
