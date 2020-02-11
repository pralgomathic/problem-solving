#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s,a,f;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>s>>a>>f;
            sum+=s*f;
        }
        cout<<sum<<endl;
    }
    return 0;
}


