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
    int px,py,qx,qy;
    int x,y;
    cin>>t;
    while(t--)
    {
        cin>>px>>py>>qx>>qy;
        x = 2*qx - px;
        y = 2*qy - py;

        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
