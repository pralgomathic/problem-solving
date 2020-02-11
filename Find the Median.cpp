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
    long n;
    vector<long>ar;
    while(cin>>n)
    {
        long num;
        for(int i = 0; i<n; i++)
        {
            cin>>num;
            ar.push_back(num);
        }

        sort(ar.begin(), ar.end());

        int md = n/2;

        cout<<ar[md]<<endl;
    }

    return 0;
}
