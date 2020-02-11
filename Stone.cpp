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

    long long n,k;
    while(cin>>n>>k)
    {
        vector<long long> vc;
        long long val;
        for(long long i = 0; i<n; i++)
        {
            cin>>val;
            vc.push_back(val);

        }
        vector<long long>newv;
        vector<long long>newvv;
        long long mx1,mx2;
        mx1 = *max_element(vc.begin(), vc.end());
        for(long long i = 0; i<n; i++)
        {
            //newv[i] = mx1 - vc[i];
            newv.push_back(mx1 - vc[i]);
        }

        mx2 = *max_element(newv.begin(), newv.end());
        for(long long i = 0; i<n; i++)
        {
            //newvv[i] = mx2 - newv[i];
            newvv.push_back(mx2 - newv[i]);
        }

        if(k==0)
        {
            for(long long i = 0; i<n; i++)
            {
                cout<<vc[i]<<" ";

            }
        }

        if(k>0)
        {
                if(k%2 == 0)
            {
                for(long long i = 0; i<n; i++)
                {
                    cout<<newvv[i]<<" ";

                }
            }
            else if (k%2 == 1)
            {
                for(long long i = 0; i<n; i++)
                {
                    cout<<newv[i]<<" ";

                }
        }
        }



            /*
        for(long long j = 0;j<k; j++)
        {
            mx = *max_element(vc.begin(), vc.end());
            for(long long i = 0; i<n; i++)
            {

                vc[i] = mx - vc[i];
            }

        }

        for(long long i = 0; i<n; i++)
        {
            cout<<vc[i]<<" ";

        }

        */


        cout<<"\n";

    }

    return 0;

}




