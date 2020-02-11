#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int a,b;
        for(int k =0;k<n;k++)
        {
            cin>>a>>b;
        if(a<b)
            cout<<"<"<<endl;
        if(a>b)
            cout<<">"<<endl;
        if(a==b)
            cout<<"="<<endl;
        }

    }

    return 0;
}
