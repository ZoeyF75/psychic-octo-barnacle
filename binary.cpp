#include <iostream>
#include <cmath>
using namespace std;

int main(){
  
  long long x;

  cin>>x;
  int k=log2(x);

  for (int i = k; i >= 0;i--){
      (x&(1<<i))==0 ? cout<<0   : cout<<1;
  }
  cout <<endl;

  return 0;
}