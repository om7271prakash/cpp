/* 
Hollow Diamond Pattern

eg:n=4
   *
  * *
 *   *
*     *
 *   *
  * *
   *

*/

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
      cout<<" ";
    }
    cout<<"*";
    for(int k=1; k<i-1; k++){
      cout<<" ";
    }
    for(int k=1; k<i; k++){
      cout<<" ";
    }
    if(i>1){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i=0; i<n-1; i++){
    for(int j=0; j<=i; j++){
      cout<<" ";
    }
    cout<<"*";
    for(int k=n-3; k>i; k--){
      cout<<" ";
    }
    for(int l=n-2; l>i; l--){
      cout<<" ";
    }
    if(i<n-2){
      cout<<"*";
    }
    cout<<endl;
  }  
}