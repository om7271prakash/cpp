/*
Triangle Pattern
eg: n=4
1
22
333
4444
*/

#include<iostream>

using namespace std;

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout<<i;
    }
    cout<<endl;
  }
}