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
    cin>>t;
    long long MOD = 1000000007;
    long long n,sum;
    while(t--)
    {
        cin>>n;
        sum = powl(n%MOD,2);
        cout<<sum%MOD<<endl;
    }

    return 0;
}
