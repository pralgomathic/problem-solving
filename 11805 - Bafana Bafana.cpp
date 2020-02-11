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
    int t,n,k,p,cas=0,ans;

    cin>>t;
    while(t--)
    {
        cin>>n>>k>>p;

        p = p%n;
        if(p+k>n)
            ans = p+k-n;
        else
            ans = p+k;

        cout<<"Case "<<++cas<<": "<<ans<<endl;
    }
    return 0;

}
