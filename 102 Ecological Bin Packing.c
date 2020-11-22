#include<stdio.h>
#define MIN(a,b) (a < b ? a : b)
int main()
{
    int b1,g1,c1,b2,g2,c2,b3,g3,c3;
    int BGC,BCG,CBG,CGB,GCB,GBC;

    while(scanf("%d %d %d %d %d %d %d %d %d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3) != EOF){

    BGC = (b2 + b3) + (g1 + g3) + (c1 + c2);

    BCG = (b2 + b3) + (c1 + c3) + (g1 + g2);

    CBG = (c2 + c3) + (b1 + b3) + (g1 + g2);

    CGB = (c2 + c3) + (g1 + g3) + (b1 + b2);

    GCB = (g2 + g3) + (c1 + c3) + (b1 + b2);

    GBC = (g2 + g3) + (b1 + b3) + (c1 + c2);

    int min = MIN(MIN(MIN(GCB,GBC),MIN(CGB,CBG)),MIN(BCG,BGC));

    if(min == BCG) printf("%s %d\n","BCG",min);
    else if(min == BGC) printf("%s %d\n","BGC",min);
    else if(min == CBG) printf("%s %d\n","CBG",min);
    else if(min == CGB) printf("%s %d\n","CGB",min);
    else if(min == GCB) printf("%s %d\n","GCB",min);
    else if(min == GBC) printf("%s %d\n","GBC",min);

    }
    return 0;
}
