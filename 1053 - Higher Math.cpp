#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int t, a,b,c,i;
    int angleA,angleB,angleC;
    while(scanf("%d",&t)==1)
    {
        //cin>>a>>b>>c;
        for(i=1;i<=t;i++)
        {


            scanf("%d %d %d",&a,&b,&c);

            angleA = b*b+c*c-a*a;
            angleB = c*c+a*a-b*b;
            angleC = a*a+b*b-c*c;


            if (angleA==0 || angleB ==0 || angleC==0)
                printf("Case %d: yes\n",i);
            else
                 printf("Case %d: no\n",i);
        }

    }

    return 0;
}
