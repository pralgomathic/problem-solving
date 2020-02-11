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
    int t,n;
    int arr[1001];
    scanf("%d",&t);

    for(int i = 1; i<=t; i++)
    {
        //printf("\n");
        scanf("%d",&n);

        for(int i = 0; i<n; i++)
            scanf("%d",&arr[i]);
        int sum = 0;
        for(int i = 0; i<n; i++)
        {
            if(arr[i]<0)
            {
                arr[i] = 0;

            }

            sum+=arr[i];
        }


        printf("Case %d: %d\n",i,sum);

        //printf("\n");
    }

    return 0;
}

