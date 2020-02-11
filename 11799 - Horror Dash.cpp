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
    int t,cs = 1;
    vector<int>v;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int item;
        for(int i=0; i<n; i++)
        {
            cin>>item;
            v.push_back(item);
        }
        int max = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i]>max)
                max = v[i];
        }
        //sort(v.begin(),v.end());
        //cout<<"Case "<<cs<<": "<<max<<endl;
        printf("Case %d: %d\n", cs++, max);
       //cs++;

    }

    return 0;

}
