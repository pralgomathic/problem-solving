#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int GCD(int u, int v)
 {
     return (v == 0) ? u : GCD (v, u % v);
     /*
    while ( v != 0) {
        int r = u % v;
        u = v;
        v = r;
    }
    return u;
    */
}

int totient(int n)
{   int et=0;
    for(int i=1;i<=n-1;i++)
    {
        if(GCD(i,n)==1)
            et=et+1;
    }
    return et;
}

int main()
{

    int n,t,a,b;
    while (scanf("%d",&t)==1)
    {
        for(int i=1;i<=t;i++)
        {
            scanf("%d %d",&a,&b);
            int rp=0;
            for(int k=a;k<=b;k++)
            {
                rp+= totient(k)*totient(k);
            }

            printf("Case %d: %d\n",i,rp);

        }
    }

    return 0;

}
