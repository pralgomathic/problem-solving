#include<iostream>
#include<cstdio>
#include<cmath>
#define pi 2 * acos (0.0)
using namespace std;


int main()
{
    int  t, i;
    double  r, area_of_circle, area_of_square,rr,result;

    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lf",&r);
            rr = 2 *r;
            area_of_circle = pi * r * r;
            area_of_square = rr *rr;
            result = area_of_square - area_of_circle;

            printf("Case %d: %.2lf\n",i,result);
            //cout<<"Case "<<i<<": "<<result+0.000000001<<endl;

        }
    }

   return 0;
}
