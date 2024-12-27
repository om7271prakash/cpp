/*
square pattern for n numbers

eg: n=3

123
456
789

*/

#include<iostream>

using namespace std;

int main(){
  int n, count=1;
  cout<<"Please enter a number: ";
  cin>>n;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cout<<count++;
    }
    cout<<endl;
  }
}