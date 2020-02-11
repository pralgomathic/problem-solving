#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n ;
    int a, b;
    while(scanf("%d", &n)==1)
    {
        for(int i =1; i<=n; i++)
        {
            scanf("%d %d", &a, &b);
            printf("Case %d: %d\n",i,a+b);
        }
    }

    return 0;
}
