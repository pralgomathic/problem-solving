#include<iostream>
using namespace std;
int main()
{
    int i,j,a[100],key,n,t,count;
    while(cin>>t)
    {

        for(int k=0;k<t;k++)
        {
            cin>>n;
            for(i=1;i<=n;i++)
            {
                cin>>a[i];
            }

            count=0;
            for(j=2;j<=n;j++)
            {
                key=a[j];
                i=j-1;
                while(i>0 && a[i]>key)
                {
                    a[i+1]=a[i];
                    i--;
                    count++;
                }
                a[i+1]=key;
            }


            cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;

        }

    }

    return 0;
}
