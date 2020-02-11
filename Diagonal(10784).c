#include<stdio.h>
#include<math.h>
int main()
{
    long long N,n,a,b,c,count;
    count=0;
    while(scanf("%lld",&N)==1)
    {
        if(N==0)
        break;
        a=1;
        b=-3;
        c=-2*N;
        n=ceil((-b + sqrt(b*b - 4*a*c)) / 2*a);
        if((n*(n-3)/2) >= N && (n*n - 3*n - 2*N) >= 0)
            printf("Case %lld: %lld\n",++count,n);
    }

    return 0;
}
