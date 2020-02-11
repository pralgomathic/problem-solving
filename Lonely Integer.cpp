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

int lonelyInteger(vector<int>a)
{
    int val = 0;
    for(int i = 0; i<a.size(); i++)
    {
        val^=a[i];
    }
    return val;
}
int main()
{
    int res;
    int n, item;
    cin>>n;
    vector<int>a;

    for(int i = 0; i<n; i++)
    {
        cin>>item;
        a.push_back(item);
    }

    res = lonelyInteger(a);
    cout<<res<<endl;

    return 0;

}
