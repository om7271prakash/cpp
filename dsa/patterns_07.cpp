/*
Pyramid Pattern
eg: n=4
   1
  121
 12321
1234321

*/

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;

  for(int x=1; x<n; x++){
    for(int i=0; i<n-x; i++){
      cout<<" ";
    }
    for(int j=0; j<x; j++){
      cout<<j+1;
    }
    for(int k=x; k>1; k--){
      cout<<k-1;
    }
    cout<<endl;
  }
}