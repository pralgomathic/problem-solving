#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    int t;
    long long n,res;
    long long mod = 100000;
    cin>>t;
    while(t--)
    {
        cin>>n;
        res =  ((n*(n+1))/2)%mod;
        cout<<res<<endl;


    }
    return 0;
}

