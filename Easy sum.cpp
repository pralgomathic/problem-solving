#include<iostream>

using namespace std;
long long bigmod(long long b,long long p,long long m)
{
    if(p==0)
        return 1;
    else if(p%2==0)
        return ((bigmod(b,p/2,m))*(bigmod(b,p/2,m)))%m;
    else
        return ((b % m) * bigmod(b,p-1,m)) % m;
}
int main()
{
    int t;
    cin>>t;
    long long n,m;
    while(t--)
    {
        cin>>n>>m;
        long long sum = 0;
        long mod = 1000000007;

        for(int i = 1; i<=n; i++)
        {
            //sum+=i%m;
            sum+= bigmod(i,m,mod);
        }

        cout<<sum<<endl;
    }

    return 0;
}
