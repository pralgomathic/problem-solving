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
    string ch;
    int cs = 1;
    while(cin>>ch)
    {
        if(ch=="Hajj")
            cout<<"Case "<<cs++<<": Hajj-e-Akbar"<<endl;
        if(ch=="Umrah")
            cout<<"Case "<<cs++<<": Hajj-e-Asghar"<<endl;
        if(ch=="*")
            break;
    }
    return 0;
}
