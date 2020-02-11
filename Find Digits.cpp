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
long long findDigitsDivide(long long number)
{
    long long rem;
    long long count = 0;
    long long n = number;
    while(number>0)
    {
        rem = number%10;
        if( rem>0 && n%rem==0)
        {
            count++;
        }
        number = number/10;
    }

    return count;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        long long res = findDigitsDivide(n);
        cout<<res<<endl;
    }
    return 0;
}
