#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    double ax,ay,bx,by,cx,cy;

    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>ax>>ay>>bx>>by>>cx>>cy;
            long double a,b,c;
            long double area;
            a = ax*(by-cy);
            b = bx*(cy-ay);
            c = cx*(ay-by);
            area = abs((a+b+c)/2);
            //long long  res = (long long)(area/7);
            //cout<<res<<endl;
            cout<<floor(area/7)<<endl;
        }


    }

    return 0;


}
