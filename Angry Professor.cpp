#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int T,n,k;
    int arr[200];
    int validAttendance;
    while(cin>>T){
        for(int i = 0; i<T; i++){
            cin>>n;
            cin>>k;
                validAttendance = 0;
                for(int j = 0; j<n; j++){
                    cin>>arr[j];
                }
                for(int m = 0; m<n; m++){
                    if(arr[m] <= 0){
                        validAttendance++;
                    }
                }
                if(k >= 1 && k <= n){
                    if(validAttendance < k)
                        cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                }


        }
    }

    return 0;
}
