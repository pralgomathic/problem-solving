#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
using namespace std;

#define SIZE_N 5000
#define SIZE_P 5000

bool flag[SIZE_N+5];
long long primes[SIZE_P+5];
long long seive()
{
    long long i,j, total = 0, val;

    for(i=2;i<=SIZE_N;i++)
        flag[i]=1;
    val = sqrt(SIZE_N)+1;

    for(i=2;i<=SIZE_N;i++)
    {
        if(flag[i])
        {
            for(j=i;j*i<=SIZE_N;j++)
                flag[i*j] = 0;
        }

    }

    for(i=2;i<=SIZE_N;i++)
    {
        if(flag[i])
            primes[total++]=i;
    }


    return total;
}

long long sum_of_divisor(long long n)
{
    long long i, val, count, sum, p,s;

    val = sqrt(n)+1;
    sum = 1;
    for(i=0;primes[i]<val;i++)
    {
        if(n%primes[i]==0)
        {
            p = 1;
            while(n%primes[i]==0)
            {
                n/=primes[i];
                p = p*primes[i];
            }
            p = p*primes[i];
            s = (p-1)/(primes[i]-1);
            sum = sum * s;


        }
    }
    if(n>1)
    {
        p=n*n;
        s=(p-1)/(n-1);
        sum =  sum *s;
    }
    return sum;
}
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
    long long total=seive();
    long long i,t;
    long long n,m;

    while(cin>>t)
    {
        for(int k=1;k<=t;k++)
        {
            cin>>n>>m;
            long md = 1000000007;
            long long num = bigmod(n,m,md);


            cout<<"Case "<<k<<": "<<sum_of_divisor(num)%md;
            cout<<endl;
        }

    }

    return 0;
}
