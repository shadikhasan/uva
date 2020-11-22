#include<stdio.h>
int main()
{
    int k;
    int x,number,parity;
    int bin[10000];
    while(scanf("%d",&number)==1)
    {
        parity = 0;
        x=0;
        if(number == 0)
            break;

        while(number>0){

            int mod = number % 2;
            if(mod == 1)
                parity++;
            bin[x] = mod;
            number=number/2;
            x++;



    }
    printf("The parity of ");
    for(k = x-1; k >= 0; k--)
        {
            printf("%d",bin[k]);
        }
        printf(" is %d (mod 2).\n",parity);
    }


    return 0;
}
