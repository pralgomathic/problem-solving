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

long long store_primes[5000],freq_primes[5000],store_divisor[5000],total_prime,ans;

void divisor(long long n)
{
    long long i, val, c;

    val = sqrt(n)+1;
    total_prime=0;
    for(i=0;primes[i]<val;i++)
    {
        if(n%primes[i]==0)
        {
            c = 0;
            while(n%primes[i]==0)
            {
                n/=primes[i];
                c++;
            }
            store_primes[total_prime]=primes[i];
            freq_primes[total_prime]=c;
            total_prime++;
            val=sqrt(n)+1;

        }
    }
    if(n>1)
    {
        store_primes[total_prime]=n;
        freq_primes[total_prime]=1;
        total_prime++;
    }
}

void Generate(long long cur,long long num)
{
    long long i,val;
    if(cur==total_prime)
    {
        store_divisor[ans++]=num;

    }
    else
    {
        val=1;
        for(i=0;i<=freq_primes[cur];i++)
        {
            Generate(cur+1,num*val);
            val = val*store_primes[cur];
        }
    }
}
/*
long long pow1(int x,int y)
{
    if(y==0) return 1;
    return x*pow1(x,y-1);
}
*/

/*
long long bigmod(long long b,long long p,long long m)
{
    if(p==0)
        return 1;
    else if(p%2==0)
        return ((bigmod(b,p/2,m))*(bigmod(b,p/2,m)))%m;
    else
        return ((b % m) * bigmod(b,p-1,m)) % m;
}
*/
int main()
{
    long long total=seive();
    long long i,t;
    long long n,m;
    while(cin>>t)
    {
        for(int k=1;k<=t;k++)
        {
            cin>>n;
            //long md = 1000000007;
            //long long num = bigmod(n,m,md);
            divisor(n);
            ans=0;
            Generate(0,1);
            sort(&store_divisor[0],&store_divisor[ans]);
            long long sum=0;
            for(i=0;i<ans;i++)
                cout<<store_divisor[i]<<" ";
                //sum+=store_divisor[i];

            //cout<<"Case "<<k<<": "<<sum%md;
            cout<<endl;
        }

    }

    return 0;
}
