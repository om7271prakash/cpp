/*
  Pointers
*/ 


#include<iostream>
using namespace std;

// void swapByPointer(int*, int*);
void swapByRefVariable(int &, int &);

int main(){
  int a = 10;
  int b = 20;
  cout<<"The value of a is "<<a<<endl;
  cout<<"The value of b is "<<b<<endl;

  cout<<"The address of a is "<<&a<<endl;
  cout<<"The address of b is "<<&b<<endl;

  int* c = &a;
  int* d = &b;

  // & -> address of operator
  // * -> variable hold the value of address variable

  cout<<"Variable c stores address/reference of a is "<<c<<endl;
  cout<<"Variable d stores address/reference of b is "<<d<<endl;

  cout<<"The value stored in reference c is "<<*c<<endl;
  cout<<"The value stored in reference d is "<<*d<<endl;

  // swapByPointer(& a, &b);
  swapByRefVariable(a, b);
  cout<<"The value of a after swap is "<<a<<endl;
  cout<<"The value of b after swap is "<<b<<endl;
  return 0;
}

// call by reference by using pointer
void swapByPointer(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

// call by reference by using reference variable
void swapByRefVariable(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}