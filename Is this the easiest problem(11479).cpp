#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    long long a[3];
    int i,T;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%lld %lld %lld", &a[0], &a[1], &a[2] );

            sort( a, a+3 );

            if( a[0] + a[1] <= a[2] )
                printf("Case %d: Invalid\n",i);
            else if( a[0] == a[1] && a[1] == a[2] )
                printf("Case %d: Equilateral\n",i);
            else if( a[0] == a[1] || a[1] == a[2] || a[0] == a[2] )
                printf("Case %d: Isosceles\n",i);
            else
                printf("Case %d: Scalene\n",i);
        }
    }
    return 0;
}
