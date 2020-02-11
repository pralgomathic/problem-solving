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
    set<char>a;
    char ch;
    cin>>ch;

    while(cin>>ch && ch!='}')
    {
        if(ch>='a' && ch<='z')
            a.insert(ch);
    }

    cout<<a.size()<<endl;

    return 0;

}
