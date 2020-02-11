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
    int n,a[100],cas=0;
    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        printf("\n");
        long long sum=1;
        int neg=0,s=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
                sum*=a[i];

            if(a[i]<0)
                s*=a[i];


        }
        if(s>0)
            sum = sum * s;
        printf("Case #%d: The maximum product is %lld.\n",++cas,sum);
        printf("\n");
    }

    return 0;
}
