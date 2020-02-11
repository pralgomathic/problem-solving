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
#define phi 1.6180339887
int main()
{
    double fn;
    long long n;
    while(scanf("%lld",&n)==1)
    {
        fn = pow(phi,(2-phi))*pow(n,(phi-1));
            printf("%.0lf\n",fn);

        if(n==0) break;
    }
    return 0;
}
