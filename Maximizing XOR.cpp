#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int maxXor(int l, int r) {
    int mxr = 0;
    //xr = l^r;
    int arr[1001];
    int rr = 0;
    for(int i = l; i <=r; i++)
    {
        for(int j = i; j <=r; j++)
        {
            //arr[i] = i^j;
            rr = max(rr,i^j);
        }
    }
    /*
    for(int i = l; i <=r; i++)
    {
        if(arr[i]>mxr)
            mxr = arr[i];
    }
    */
    return rr;

}

int main() {
    int res;
    int _l;
    cin >> _l;

    int _r;
    cin >> _r;

    res = maxXor(_l, _r);
    cout << res;

    return 0;
}

