#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long a,b,c,d,L;

    while(cin>>a>>b>>c>>d>>L)
    {
        int n=0;
        long fn;
        if(a==0 && b==0 && c==0 && d==0 && L==0)
            break;
        for(int i=0;i<=L;i++)
        {
            fn = a * (pow(i,2.0))+ b*i+c;
            if(fn%d==0)
                n++;
        }
        cout<<n<<endl;
    }

    return 0;
}
