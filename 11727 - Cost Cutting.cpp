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
    int t,cs=1;
    int a, b, c;
    cin>>t;
    while(t--)
    {
       // for(int i = 0; i<3; i++)
            cin>>a>>b>>c;
        int mid;
        /*
        if(a<b && b<c)
            mid = b;
        if(b<a && b>c )
            mid = b;
        if(a>b && a<c)
            mid = a;
        */
        if ( (a - b) * (c - a) >= 0 ) // a >= b and a <= c OR a <= b and a >= c
            mid =  a;
        else if ( (b - a) * (c - b) >= 0 ) // b >= a and b <= c OR b <= a and b >= c
            mid =  b;
        else
            mid =  c;
        cout<<"Case "<<cs<<": "<<mid<<endl;
        cs++;

    }
    return 0;
}
