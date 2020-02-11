#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int>v;
    vector<int>area;
    int n;
    int val;
    while(cin>>n){

        for(int i = 0; i<n; i++){
            cin>>val;
            v.push_back(val);
        }
        for(int i = 0; i<(n/2)+1; i++){
            area.push_back(v[i]*v[n-1]);
        }
        sort(area.begin(), area.end());
        for(int i = 0; i<area.size(); i++)
            cout<<area[i]<<" ";
       // cout<<area.back()<<endl;
    }
    return 0;
}

