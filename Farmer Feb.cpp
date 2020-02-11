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

int N = 1000;
int status[1001];

bool isPrime(int n)
{
    int sq = int (sqrt((double)n));
    for(int j = 2;j<=sq;j++)
    {
        if(n%j == 0)
        return false;
    }
    return true;
}
int main()
{
    int t, x,y;

    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int sum = x + y;
        int ans;
        int mx = max(x,y);
        for(int i = 1;i<=1000;i++)
        {
            if(isPrime(sum+i)==true)
            {
                ans = i;
                break;
            }


        }
        cout<<ans<<endl;
    }

    return 0;
}
