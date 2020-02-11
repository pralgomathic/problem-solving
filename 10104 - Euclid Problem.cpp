#include<iostream>
using namespace std;

int extended_euclidean(int a , int b, int &x, int &y)
{
    if (b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int d  = extended_euclidean(b, a%b,y,x);
    y = y - (a/b)*x;
    return d;
}

int main()

{
    int a,b;

    while(cin>>a>>b)
    {
        int x, y,ds;
        ds = extended_euclidean(a,b,x,y);
        cout<<x<<" "<<y<<" "<<ds<<endl;

    }

    return 0;
}
