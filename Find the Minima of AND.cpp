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
    long long n;
    cin>>t;
    vector<long long>v;
    vector<long long>minv;
    while(t--)
    {
        cin>>n;
        long long num;
        for(long long i = 0; i<n; i++)
        {
            cin>>num;
            v.push_back(num);
        }
        long long AND;
        long long mn = v[0] & v[1];
        for(long long i = 0; i<v.size(); i++)
        {
            for(long long j = i+1; j<v.size(); j++)
            {
                AND = v[i]&v[j];
                if(AND<mn)
                {
                    mn = AND;
                }

            }
        }
        cout<<mn<<endl;
    }
}























































































































































































































































































































































































































































