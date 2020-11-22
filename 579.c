#include<stdio.h>
int main()
{
    double h,m,angle;
    while(1)
    {
        scanf("%lf:%lf",&h,&m);
        if(h == 0.0 && m == 0.0)break;

        angle = (11 * m / 2 - 30 * h);

        if(angle < 0)angle *= -1;

        if(angle > 180.0)
            angle = (360 - angle);

        printf("%.3lf\n",angle);
    }
    return 0;
}
