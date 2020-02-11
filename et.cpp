#include<stdio.h>
int totient(int n)
{
    int i, ans = n;

    for (i=2;i*i<=n;i++)
    {
        if (n%i==0)
            ans-=ans/i;

        while(n%i==0)
            n/=i;
    }

    if (n!=1)
        ans-=ans/n;
    return ans;
}

int main()
{
    int t,n,a,b;

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
