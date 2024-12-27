/*
  Square pattern
  n = 4
eg: 
  1234
  1234
  1234
  1234
*/

#include<iostream>

using namespace std;

int main(){
  int n;
  cout<<"Enter the square you want to display: ";
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1;j<=n;j++){
      cout<<j;
    }
    cout<<endl;
  }
}