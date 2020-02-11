#include<iostream>
#include<cstdio>

using namespace std;
int findFib(int n)
{
    int dp[100];
    if(n==1 | n==0)
        return 1;
    else if(dp[n]==0)
        dp[n]= findFib(n-1)+findFib(n-2);
    return dp[n];
}
int main()
{
    int t, n, i,res;

    while(scanf("%d",&n)==1)
    {

        if(n==0)
            break;
        res = findFib(n);

        printf("%d\n",res);
    }

    return 0;
}
