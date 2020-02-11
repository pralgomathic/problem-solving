#include<iostream>
#include<cstdio>

using namespace std;


int main(){

    int weight;

    while(cin>>weight){

        if(weight > 2 && (weight - 2) % 2 == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
