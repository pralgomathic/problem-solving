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
    vector<int>v;
    int n,x;
    int item;
    cin>>n>>x;
    for(int i = 0; i<x;i++)
    {
        cin>>item;
        v.push_back(item);

    }
    for(int i = 0; i<x;i++)
    {
        if(v[i]==n)
            cout<<i<<endl;
    }

    return 0;
}
