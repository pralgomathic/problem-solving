#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long x,res;

    while(scanf("%lld",&x)!=EOF)
    {

        res = (x*x*(x+1)*(x+1))/4;

        printf("%lld\n",res);
    }

    return 0;
}
