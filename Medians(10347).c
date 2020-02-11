#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,area,res,narea;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
            s=0.5*(a+b+c);
            area=(s*(s-a)*(s-b)*(s-c));
            if(area<=0)
                printf("-1.000\n");
            else
            {
                narea=sqrt(area);
                res=(narea*4)/3 ;
                    printf("%.3lf\n",res);
            }

    }
    return 0;
}
