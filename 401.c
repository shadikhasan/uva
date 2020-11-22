#include<stdio.h>
#include<string.h>
int cmp(char s[])
{

    char s2[100000];

    strcpy(s2, s);
    strrev(s2);

    return strcmp(s, s2);
}
int main()
{
    char s[100000];
    while(scanf("%s", s) != EOF)
    {
        int l = strlen(s);
        int count = 0,i;
        char S[1000];
        strcpy(S, s);
        for(i = 0; i < l; i++)
                    {
                        if(s[i] == 'A' ||
                           s[i] == '3' ||
                           s[i] == 'E' ||
                           s[i] == 'H' ||
                           s[i] == 'I' ||
                           s[i] == 'J' ||
                           s[i] == 'L' ||
                           s[i] == 'M' ||
                           s[i] == '0' ||
                           s[i] == 'O' ||
                           s[i] == 'T' ||
                           s[i] == 'U' ||
                           s[i] == 'V' ||
                           s[i] == 'W' ||
                           s[i] == 'Y' ||
                           s[i] == 'Z' ||
                           s[i] == '5' ||
                           s[i] == '1' ||
                           s[i] == '2' ||
                           s[i] == 'S' ||
                           s[i] == '8'

                           )count++;
                    }

        if(count == l)
        {
            if((cmp(s) == 0))printf("%s -- is a mirrored palindrome.\n\n",S);
            else if(cmp(s) != 0)
            {
                  for(i = 0; i < l; i++)
                    {
                        if(s[i] == '3')s[i] = 'E';
                        else if(s[i] == 'J')s[i] = 'L';
                        else if(s[i] == '2')s[i] = 'S';
                        else if(s[i] == '5')s[i] = 'Z';
                        else if(s[i] == '0')s[i] = 'O';
                    }
                    if(cmp(s) == 0)printf("%s -- is a mirrored string.\n\n",S);
                    else
                        printf("%s -- is not a palindrome\n\n",S);

            }

        }
        else if(cmp(s) == 0)printf("%s -- is a regular palindrome.\n\n",S);
        else
            printf("%s -- is not a palindrome.\n\n",S);

    }
    return 0;
}
