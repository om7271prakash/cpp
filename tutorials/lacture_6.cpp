// Reference variable and Type Cast

#include<iostream>

using namespace std;

int main(){
  float x = 5;
  float & y = x;

  cout<<x<<endl;
  cout<<y<<endl;

  // Type Casting

  int a = 6;
  int b = 5.6;
  cout<<"The value of a is: "<<a<<endl;
  cout<<"The value of a after typecast is: "<<float(a)<<endl;
  cout<<"The value of a after typecast is: "<<(float)a<<endl;
  cout<<"The value of b is"<<b<<endl;
  cout<<"The value of b after typecast is: "<<int(a)<<endl;
}