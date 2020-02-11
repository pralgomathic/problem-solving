#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int arr [105];
    double positiveCounter = 0;
    double negativeCounter = 0;
    double zeroCounter = 0;
    cin>>n;
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
     for(int i = 0; i< n ; i++){
         if(arr[i] > 0)
             positiveCounter++;
         else if(arr[i] < 0)
             negativeCounter++;
         else
             zeroCounter++;
     }
    printf("%.3lf\n%.3lf\n%.3lf\n", positiveCounter/n,negativeCounter/n, zeroCounter/n);
    return 0;
}
