#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int k;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&v[i]);
            //v.push_back(s);
        }
        sort(v.begin(),v.end());

        for(int i=0;i<n;i++)
            printf("%d ",v[i]);
        printf("\n");

        if(n==0)
            break;

    }

    return 0;
}
