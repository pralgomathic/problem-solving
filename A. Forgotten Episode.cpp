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
    long long n;
    while(cin>>n)
    {
        long long arr[100001];
        for(long long i =0; i<n-1;i++)
            cin>>arr[i];
        long long sumN = (n * (n+1))/2;
        long long sumA = 0;

        for(long long i =0; i<n-1;i++)
        {
            sumA+=arr[i];

        }

        long long missN = sumN - sumA;

        cout<<missN<<endl;
    }

    return 0;
}
