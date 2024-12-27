/*
Reverse Triangle Pattern

eg: n=4

1
21
321
4321

*/

#include<iostream>

using namespace std;

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=i; j>=1; j--){
      cout<<j;
    }
    cout<<endl;
  }
}