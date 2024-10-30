#include<iostream>
#include<iomanip>

using namespace std;

/*
  Manipulators: Enhance the output of c++ programs
  eg: endl, 
*/ 
int main(){
  int a=1, b=23, c=456, d=7890;
  // Manipulator endl;
  cout<<"Value of a is "<<a<<endl;
  cout<<"Value of b is "<<b<<endl;
  cout<<"Value of c is "<<c<<endl;
  cout<<"Value of d is "<<d<<endl;

  // Manipulator setw(<space_length>)
  cout<<"Value of a is "<<setw(4)<<a<<endl;
  cout<<"Value of b is "<<setw(4)<<b<<endl;
  cout<<"Value of c is "<<setw(4)<<c<<endl;
  cout<<"Value of d is "<<setw(4)<<d<<endl;

  return 0;
}