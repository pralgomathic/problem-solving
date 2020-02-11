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
    int t;
    int arr[1001];
    cin>>t;
    while(t--)
    {
        float n,num,sum = 0;
        cin>>n;
        double avg;
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];

            sum += arr[i];
        }
        avg = double(sum/n);
        //cout<<"sum: "<<sum<<endl;
        //cout<<"avg: "<<avg<<endl;
        int count = 0;
        for(int i = 0; i<n; i++)
        {
            if(arr[i]>avg)
                count++;

        }
        //cout<<"coun:"<<count<<endl;
        double res;
        res = ((n - (n-count))/n) * 100;
        printf("%.3lf%%\n", res);
        //cout<<res;

    }
    return 0;
}

