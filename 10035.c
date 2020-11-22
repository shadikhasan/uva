#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];

    while(1)
    {

        scanf("%s %s",a,b);

        if(a[0] == 48 && b[0] == 48)break;

        int i,count = 0,carry = 0;
        for(i = strlen(a) - 1; i >= 0; i--)
        {
            if((a[i] + b[i] + carry - 96 ) >= 10 )
            {
                count++;
                carry = (a[i] + b[i] - 96) - 9;
            }
        }
        if(count == 0)printf("No carry operation\n");
        else
            printf("%d carry operation\n",count);
        }

    return 0;
}
