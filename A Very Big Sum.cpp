#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    vector<int>v(1000);
    long long sum = 0;
    while(cin>>n){
        for(int i = 0; i<n; i++)
            cin>>v[i];
        for(int i = 0; i<n; i++)
            sum += v[i];

        cout<<sum<<endl;
    }

    return 0;
}
