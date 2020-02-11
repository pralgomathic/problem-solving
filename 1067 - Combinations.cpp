#include<iostream>
#include<vector>
#include<cstdio>
#define mod 1000003
using namespace std;

long long dp[10001][10001];

long long nCr(long long a , long long b)
{
    if(a==b)
        return dp[a][b] = 1;
    if(b==1)
        return dp[a][b] = a;
    if(b==0)
        return dp[a][b] =  1;
    if(dp[a][b]) return dp[a][b];
    return dp[a][b] = nCr(a-1,b)%mod + nCr(a-1,b-1)%mod;
}
int main()
{
    long long n;

    cin>>n;

    long long a,b,res;
    for(long long i = 1 ; i<=n; i++)
    {
        cin>>a>>b;
        if(a>=0 && a>b)
        {
            res = nCr(a%mod,b%mod)%mod;
            cout<<"Case "<<i<<": "<<res<<endl;
        }

    }


    return 0;
}
