#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
     long long i,n;
        while(scanf("%lld %lld",&i,&n)==2)
        {
            if(i<n)
                printf("%lld\n",n-i);
            else
                printf("%lld\n",i-n);
        }

            return 0;

}
