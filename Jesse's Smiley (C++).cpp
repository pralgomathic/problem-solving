#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iostream>
#include <map>

using namespace std;

int printSmiles(int smiles) {
  int ans=0;
  for(int i=1;i<=smiles;i++){
    while(smiles%i!=0){
            cout<<smiles<< " ";
      ans=(smiles/i);
      //smiles/=i;
       smiles/=smiles/i;
    }
  }
  return ans;
}

int main(){
  int s;
  cin>>s;
  cout<<printSmiles(s)<<"\n";
  return 0;
}

